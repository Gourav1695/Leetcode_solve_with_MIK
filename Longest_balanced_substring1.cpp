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

// ----------------- Approach 2 more optimal using frequency array of size 26: -----------------
class Solution {
public:
    bool checkBalance(vector<int>&freq)
    {
    int ref = -1;
    for(auto it:freq)
        {
        if(ref==-1 && it!=0)
        {
            ref = it; 
            break; 
        }
       }
       for(auto it: freq)
       {
            if(it!=ref && it!=0){
                return false;
            }
       }
        return true;
    }
    int longestBalanced(string s) {
       int maxL = 0;
       for(int i = 0 ; i<s.length();i++)
       {
            vector<int>freq(26);
            for(int j = i ; j<s.length();j++)
            {
                freq[s[j]-'a']++;
                if(checkBalance(freq)){
                maxL = max(maxL, j-i+1);
            }

            }
           
       } 
       return maxL;
    }
};

// tc -->O(n^2)
// sc -->O(1) as size of map max would be 26


// ----------- 3rd way: MIK way:-------------
class Solution {
public:
    bool checkBalance(vector<int>&freq)
    {
        int common = 0;
        for(int i = 0; i<26; i++)
        {
            if(freq[i]==0)
            continue;
            if(common == 0){
                common = freq[i];
            }
            else if(freq[i]!=common)
            return false;
        }
        return true;
 
    }
    int longestBalanced(string s) {
       int maxL = 0;
       for(int i = 0 ; i<s.length();i++)
       {
            vector<int>freq(26);
            for(int j = i ; j<s.length();j++)
            {
                freq[s[j]-'a']++;
                if(checkBalance(freq)){
                maxL = max(maxL, j-i+1);
            }

            }
           
       } 
       return maxL;
    }
};

// tc -->O(n^2)
// sc -->O(1) as size of map max would be 26
