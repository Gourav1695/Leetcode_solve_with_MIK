class Solution {
public:
    bool checkBalance(unordered_map<int, int>&mp)
    {
        int ref = -1;
        for(auto it:mp){
        if(ref==-1){
            ref = it.second;
        }
        else if(it.second != ref){
            return false;
        }
       }
        return true;
    }
    int longestBalanced(string s) {
       unordered_map<int, int>mp;
       int maxL = 0;
       for(int i = 0 ; i<s.length();i++)
       {
        unordered_map<int, int>mp;
            for(int j = i ; j<s.length();j++)
            {
                mp[s[j]-'a']++;
                if(checkBalance(mp)){
                maxL = max(maxL, j-i+1);
            }

            }
           
       } 
       return maxL;
    }
};

// tc -->O(n^2)
// sc -->O(1) as size of map max would be 26
