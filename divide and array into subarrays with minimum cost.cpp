class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin()+1, nums.end());
        for(auto & it: nums){
            cout<<it<<" ";
        }
        cout<<endl;
        ans = nums[0]+nums[1]+ nums[2];
        return ans;
    }
};
// tc -->O(nlogn)
// sc -->O(1)
