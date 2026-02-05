class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec;

        for(int i = 0 ; i<n;i++)
        {
            int idx = (i + nums[i]%n + n)%n;
            vec.push_back(nums[idx]);
        }
        return vec;
    }
};
// tc --> O(n)
// sc --> O(n)


// ------------ Approach 2:--------------

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec;

        for(int i = 0 ; i<n;i++)
        {
            int shifts= nums[i]%n; // normalizing the size

            int newIdx = (i+shifts)%n; // checking of shifts
            if(newIdx<0){ // if the shift is negative out of bound then adding n to it
                newIdx +=n;
            }
            vec.push_back(nums[newIdx]);
        }
        return vec;
    }
};
// tc --> O(n)
// sc --> O(n)
