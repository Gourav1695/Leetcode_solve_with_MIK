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

// ----------------- Appraoch 2: ------------------

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int highestSetBit = log2(n);
        bitset<32>b(n);
        for(int i = 0 ; i<=highestSetBit; i++){
            if(b[i]== b[i+1])
            return false;
        }
        return true;
    }
};
// tc -->O(logn)
// sc --> O(1)
