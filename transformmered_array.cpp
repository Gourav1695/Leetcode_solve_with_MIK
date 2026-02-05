class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec;

        for(int i = 0 ; i<n;i++)
        {
            int idx = (i + nums[i]%n + n)%n;
            vec.push_back(nums[idx]);
        }
        return vec;
    }
};
// tc --> O(n)
// sc --> O(n)
