class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int temp;
        for(int i = 0; i<nums.size();i++)
        {
            temp = -1;
            for(int j = 1; j<=nums[i];j++)
            {
                if((j|(j+1))==nums[i]){
                    nums[i]= j;
                    temp = j;
                    break;
                }
            }
            if(temp == -1){
                nums[i]=-1;
            }
        }
        return nums;
    }
};

// tc --> O(n*m)
// sc --> O(1)
