class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums[n/2]==nums[(n/2)+1])
        {
            return nums[n/2];
        }
        else{
            return nums[(n/2)-1];
        }
    }
};

// tc --> O(nlogn)
// sc --> O(1)


// ------------------ 2nd Approach ---------------
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        for(int i = 2; i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]||nums[i]==nums[i-2])
            {
                return nums[i];
            }
        }
        return nums.back();
    }
};

// tc --> O(n)
// sc --> O(1)

// --------------------- 3rd Approach ---------------

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>st;
        for(auto &it: nums){
            if(st.find(it)!=st.end()){
                return it;
            }
            else{
                st.insert(it);
            }
        }
        return 0;
    }
};   


// tc --> O(n)
// sc --> O(n)
