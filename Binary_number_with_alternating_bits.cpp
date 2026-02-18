class Solution {
public:
    bool hasAlternatingBits(int n) {
        if (n ==0 ||n==1)
        return true;
        long long x;
        x = n^(n>>1);
        if((x&(x+1))==0){
            return true;
        }
        // cout<<x<<endl;
        return false;
    }
};

// tc -->O(1)
// sc -->O(1)
