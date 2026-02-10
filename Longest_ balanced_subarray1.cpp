class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxL = 0;
        for(int i = 0; i<nums.size();i++)
        {
            unordered_set<int>even;
            unordered_set<int>odd;
            for(int j = i ; j<nums.size();j++)
            {
                if(nums[j]%2==0){
                    even.insert(nums[j]);
                }
                else{
                    odd.insert(nums[j]);
                }
                if(even.size()==odd.size()){
                    maxL = max(maxL,j-i+1);
                }
                
            }
        }
        return maxL;
    }
};

// tc --> O(n^2)
// sc --> O(1)
