class Solution {
public:
    int reverseBits(int n) {
        if (n == 0 )
        {
            return 0;
        }
        int result = 0;
        for(int i = 1; i<=32; i++){
            // result left shift.
            // find the right most bit of n
            // append that bit to result.
            result = result<<=1;
            result = result|(n&1);
            n>>=1;
        }
        return result;
    }
};

// tc -->O(1)
// sc -->O(1)
