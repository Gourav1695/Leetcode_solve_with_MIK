class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int prev = INT_MIN;
        int count = 0;
        for(int i = 0; i< nums.size();i++)
        {
            if(prev<nums[i]-k){
                prev = nums[i]-k;
                count++;
            }
            else if((prev>=nums[i]-k )&& (prev<nums[i]+k))
            {
                prev = prev + 1;
                count++;
            }
        }
        return count; // -1, 0, 1, 2,2, 4
        // 9 5 5 , k =0, 5 5 9,n --> 5 , 5, 9
    }
};
// tc --> O(nlogn)
// sc --> O(1)
