class Solution {
public:
    int minimumDeletions(string s) {
        stack<char>st;
        int count = 0;
        st.push(s[0]);
        for(int i = 1; i< s.length();i++)
        {
            if(!st.empty() && st.top()=='b'&& s[i]=='a'){
                st.pop();
                count++;
            }
            else{
                st.push(s[i]);
            }
        }
        return count;
    }
};
// sc -->O(n)
// tc -->O(n)


// -------------------- Approach 2 :---------------------
class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        vector<int>left_b(n,0);
        vector<int>right_a(n,0);

        int count_b = 0;
        int count_a = 0;

        for(int i = 0; i<s.length();i++)
        {
            left_b[i]=count_b;
            if(s[i]=='b'){
                count_b++;
            }           
        }
        for(int i = s.length()-1; i>=0; i--)
        {
            right_a[i]=count_a;
            if(s[i]=='a'){
                count_a++;
            }
        }
        // reverse(right_a.begin(),right_a.end());
        // for(int i = 0 ; i<s.length(); i++)
        // {
        //      cout<< right_a[i]<<"a";
        //      cout<< left_b[i]<<"b";
        // }
        int minDeletion = INT_MAX;
        for(int i= 0 ; i<s.length(); i++)
        {
            minDeletion = min(minDeletion,(right_a[i]+left_b[i]));
        }
        return minDeletion;
    }
};

// tc -->O(2n)~ O(n)
// sc --> O(n)


// ----------------- Approach 3 : most optimal: ----------
class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        int count_a = 0;

        for(int i = s.length()-1; i>=0; i--)
        {
            if(s[i]=='a'){
                count_a++;
            }
        }
        int countb = 0;
        int minDeletion = INT_MAX;
        for(int i= 0 ; i<s.length(); i++)
        {
            if(s[i]=='a'){
                count_a--;
            }
            minDeletion = min(minDeletion,(count_a+countb));
            if(s[i]=='b'){
                countb++;
            }
        }
        return minDeletion;
    }
};

// tc --> O(1)
// sc --> O(n)
