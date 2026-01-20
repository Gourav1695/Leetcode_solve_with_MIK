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

// optimal appraoch

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
       for(int i = 0 ;i<n;i++)
       {
            if (nums[i]==2){
                result.push_back(-1);
                continue;
            }
            bool found = false;
            for(int j = 1; j<32;j++)
            {
                if((nums[i]&(1<<j))>0){ // checking set bit
                    continue;
                }
                int prev = (j-1);
                // Making prev bit 0
                int x = (nums[i]^(1<<(j-1)));
                result.push_back(x);
                found = true;
                break;
            }
            if(found == false){
                result.push_back(-1);
            }
       }
       return result;
    }
};

// tc --> O(n)
// sc --> O(1)
