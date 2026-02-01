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


// ----------------- using firstMin and secondMin :----------------
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        // second approach using simple firstmin and secondmin

        int n = nums.size();
        int score = nums[0];
        int firstMin = INT_MAX;
        int secondMin= INT_MAX;

        for(int i =1; i<n;i++)
        {
            if(firstMin>nums[i]){
                secondMin = firstMin;
                firstMin  = nums[i];
            }
            else if( secondMin>nums[i]){
                secondMin = nums[i];
            }
        }
        return score + firstMin + secondMin;
    }
};

// tc -->O(n)
// sc -->O(1)
