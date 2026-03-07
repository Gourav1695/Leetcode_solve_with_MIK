class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        s = s + s;

        // create the alternating string 
        // s1 and s2
        string s1="";
        string s2="";
        for(int i = 0; i<2*n ; i++)
        {
            s1+=(i%2==0? '0': '1');
            s2+=(i%2==0? '1': '0');
        }

        // from here sliding window starts
        int result = INT_MAX;
        int i = 0;
        int j = 0;
        int flip1 = 0;
        int flip2 = 0;
        while(j<2*n){
            if(s[j]!=s1[j]){
              flip1++;  
            }
            if(s[j]!=s2[j]){
              flip2++;  
            }

            if(j-i+1>n){ // need of shrinking of the window
                if(s[i]!=s1[i]){
                    flip1--;
                }
                if(s[i]!=s2[i]){
                    flip2--;
                }
                i++;

            }
            if(j-i+1 == n){
                result = min({result, flip1, flip2});
            }
            j++;
        }
        return result;
    }
};

// tc -->O(n)
// sc -->O(2*n)

//--------------- Approach 2 : with O(n) space:------------

class Solution {
public:
    int minFlips(string s) {
        int n = s.length();

        // create the alternating string 
        // s1 and s2
        string s1="";
        string s2="";
        for(int i = 0; i<2*n ; i++)
        {
            s1+=(i%2==0? '0': '1');
            s2+=(i%2==0? '1': '0');
        }

        // from here sliding window starts
        int result = INT_MAX;
        int i = 0;
        int j = 0;
        int flip1 = 0;
        int flip2 = 0;
        while(j<2*n){
            if(s[j%n]!=s1[j]){
              flip1++;  
            }
            if(s[j%n]!=s2[j]){
              flip2++;  
            }

            if(j-i+1>n){ // need of shrinking of the window
                if(s[i%n]!=s1[i]){
                    flip1--;
                }
                if(s[i%n]!=s2[i]){
                    flip2--;
                }
                i++;

            }
            if(j-i+1 == n){
                result = min({result, flip1, flip2});
            }
            j++;
        }
        return result;
    }
};

// tc -->O(n)
// sc -->O(n)

// ------------ Most optimal approach space O(1)------------

class Solution {
public:
    int minFlips(string s) {
        int n = s.length();

        // from here sliding window starts
        int result = INT_MAX;
        int i = 0;
        int j = 0;
        int flip1 = 0;
        int flip2 = 0;
        while(j<2*n){
            char expecteds1 = (j%2==0? '0': '1');
            char expecteds2 = (j%2==0? '1': '0');
            if(s[j%n]!=expecteds1){
              flip1++;  
            }
            if(s[j%n]!=expecteds2){
              flip2++;  
            }

            if(j-i+1>n){ // need of shrinking of the window

            expecteds1 = (i%2==0? '0': '1');
            expecteds2 = (i%2==0? '1': '0');
                if(s[i%n]!=expecteds1){
                    flip1--;
                }
                if(s[i%n]!=expecteds2){
                    flip2--;
                }
                i++;

            }
            if(j-i+1 == n){
                result = min({result, flip1, flip2});
            }
            j++;
        }
        return result;
    }
};

// tc -->O(n)
// sc -->O(1)
