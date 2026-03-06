class Solution {
public:
    bool checkOnesSegment(string s) {
        for(int i = 1; i<s.length();i++){
            if(s[i-1]=='0' && s[i]=='1'){
                return false;
            }
        }
        return true;
    }
};

// tc -->O(n)
// sc -->O(1)


//----------- Appraoch 2 :---------
class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.length();
        int count = 0;
        int i = 0;
        while(i<n){
            if(s[i]=='1'){
                count++;
                while(i<n && s[i]=='1'){
                    i++;
                }
            }
            else{
                i++;
            }
            if(count>1){
                return false;
            }
        }
        return true;
    }
};

// tc -->O(n)
// sc -->O(1)
