class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxm = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());

        return 1L*k*(maxm-min);
    }
};

// tc -->O(n)
// sc--> O(1)
