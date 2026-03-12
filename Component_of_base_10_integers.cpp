class Solution {
public:
    int bitwiseComplement(int n) {
        string s = bitset<32>(n).to_string(); // O(32)
        if(n==0){
            return 1;
        }
        s = s.substr(s.find('1')); // O(32)
        int res;
        for(int i = 0; i<s.size(); i++) // O(32)
        {
            if(s[i]=='0'){
                s[i]='1';
            }
            else{
                s[i]='0';
            }
        }
        // res = stoi(s,0,2); // the second parameter is 0 , it means we don't want to store the
        // stopping position anywhere.
        res =  stoi(s, nullptr, 2);
        return res;

    }
};


// tc -->O(1)
// sc -->O(1)


// ---------- Approach 2 :----------
class Solution {
public:
    int bitwiseComplement(int n) {
        int res = 0;
        int count = 0;
        if( n==0){
            return 1;

        }
        while(n!=0){
            int r = n%2;
            n = n/2;
            res += pow(2,count)*(!r);
            count++;
        }
        return res;
    }
};

// tc -->O(logn)
// sc -->O(1)
