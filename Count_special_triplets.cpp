class Solution {
public:
    int M = 1e9+7;
    int specialTriplets(vector<int>& nums) {
        unordered_map<int, int>mp_left;
        unordered_map<int, int>mp_right;
        int result = 0;
        for(auto it: nums)
        {
            mp_right[it]++;
        }
        for(auto num: nums)
        {
            mp_right[num]--;
            int left = mp_left[num*2];
            int right = mp_right[num*2];
            result = (result + (1LL*right*left))%M;
            mp_left[num]++;
        }
        return result;

    }
};

// tc --> O(n)
// sc --> O(n)
