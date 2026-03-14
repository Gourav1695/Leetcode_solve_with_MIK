class Solution {
public:
    vector<vector<int>>result;
    unordered_set<int>st;
    void solve(vector<int>temp, vector<int>nums){
        if(temp.size()==nums.size()){
            result.push_back(temp);
            return;
        }

        for(int i = 0; i< nums.size(); i++)
        {
            // do
            // explore
            // undo
            if(st.find(nums[i])==st.end()){
                temp.push_back(nums[i]);
                st.insert(nums[i]);
                solve(temp, nums);
                temp.pop_back();
                st.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp={};
        solve(temp,nums);
        return result;
    }
};

// t.c -->O(n * n!)
// sc -->O(n * n!)

// n! permutations × O(n) work per permutation
// = O(n × n!)
