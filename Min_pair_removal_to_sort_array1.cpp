class Solution {
public:
    int minSumIndex(vector<int> &nums){
        int minSum = INT_MAX;
        int index = -1;

        for(int i = 0; i<nums.size()-1;i++)
        {
            if(nums[i]+nums[i+1]<minSum){
                minSum = nums[i]+nums[i+1];
                index = i;
            }
        }
        return index;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

        while(!is_sorted(nums.begin(),nums.end())){ // O(k) where k is current size of array.
            int index = minSumIndex(nums); // O(k).
            nums[index] = nums[index]+ nums[index+1];
            nums.erase(nums.begin()+index+1); // O(k).
            operations++;
        }
        return operations;
    }
};

// TC: O(n^2)

// SC: O(1)
