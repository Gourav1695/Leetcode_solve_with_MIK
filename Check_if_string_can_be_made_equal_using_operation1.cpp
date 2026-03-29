class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        bool condition1 = (s1[0]==s2[0] && s1[2]==s2[2]) ||(s1[0]==s2[2] && s1[2]==s2[0]);
        bool condition2 = (s1[1]==s2[1] && s1[3]==s2[3]) ||(s1[1]==s2[3] && s1[3]==s2[1]);

        return condition1 && condition2;
    }

};

// tc -->O(1)
// sc-->O(1)


// --------------------- Another apporach 2:-----------------
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        vector<int>even(26,0); // vector<int> v(size, initial_value);
        vector<int>odd(26,0);

        for(int i = 0 ; i<4; i++)
        {
            if(i%2==0){
                even[s1[i]-'a']++;
                even[s2[i]-'a']--;
            }
            else{
                odd[s1[i]-'a']++;
                odd[s2[i]-'a']--;
            }
        }
        for(int i = 0; i<26; i++){
            if(even[i]!=0 ||odd[i]!=0){
                return false;
            }
        }
        return true;
    }
};

// tc -->O(1)
// sc -->O(1)
