class Solution {
public:
    int countBinarySubstrings(string s) {
        int curr = 1;
        int prev = 0;
        int result = 0 ;
        for(int i = 1; i<s.length();i++){
            if(s[i]== s[i-1]){
                curr++;
            }else{
                prev = curr;
                curr = 1;
            }
            if(s[i]!=s[i+1])
            result += min(curr,prev);
        }
        return result;
    }
};

// tc -->O(n)
// sc-.->O(1)
