class Solution {
public:
    int smallestNumber(int n) {
        int result = 0;
        while(result<n)
        {
            result = 2*result+1;
        }
        return result;
    }
};

// tc -->O(n)
// sc -->O(1)
