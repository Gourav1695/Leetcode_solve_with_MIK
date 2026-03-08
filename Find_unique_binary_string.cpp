class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<int> st;

        for(int i = 0; i<nums.size();i++){
            st.insert(stoi(nums[i],0,2));
        }

        // find out which element is not present in the set and return its binary value of length 
        string result = "";
        int n = nums.size();
        for(int number = 0; number<=n;number++){
            if(st.find(number)== st.end()){
                result = bitset<16>(number).to_string();
                break;
            }
        }
        return result.substr(16-n,n);
    }
};

// tc -->O(n^2)
// sc -->O(n)
