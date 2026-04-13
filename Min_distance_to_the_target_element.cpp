class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minx = INT_MAX;
        for(int i = 0 ; i<nums.size();i++)
        {    
            
            if(nums[i]==target){
                minx = min(abs(i-start),minx);
            }
        }
        return minx;
    }
};

// tc -->O(N)
// sc -->O(1)
