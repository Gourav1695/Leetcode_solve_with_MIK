class Solution {
public:
    int concatenatedBinary(int n) {
        int m = 1e9+7;
        int digits=0;
        long long result=0;
        for(int i = 1; i<=n;i++) // O(n)
        {
            digits = log2(i)+1; // O(1)
            result = ((result<<digits)%m + i)%m; //O(1)
        }
        return result;
    }
};

// tc -->O(n)
// sc -->O(1)
