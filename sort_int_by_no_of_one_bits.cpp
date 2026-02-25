class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int>>mp;
        
        for(auto it: arr){
            mp[__builtin_popcount(it)].push_back(it);
        }
        vector<int>result;
        for(auto it: mp){
            vector<int>nums = it.second;
            sort(nums.begin(),nums.end());
            for(auto y : nums)
            {
                result.push_back(y);
            }
        }
        return result;
    }
};


// tc --> O(nlogn )
// sc --> O(n)

// ⏱️ Time Complexity (TC)
 
// Let:

// n = number of elements in arr

// k = number of distinct bit-counts
// (max possible is log₂(max(arr)) + 1, for int ≈ 32)

// Step-by-step:

// 1️⃣ Building the map

// mp[__builtin_popcount(it)].push_back(it);

// __builtin_popcount → O(1)

// map insertion → O(log k)

// Done n times

// ➡️ O(n log k)

// Since k ≤ 32, this is effectively O(n).

// 2️⃣ Sorting each bucket

// sort(nums.begin(), nums.end());

// If bucket sizes are:

// n₁, n₂, n₃, ..., nₖ

// Total sorting cost:

// O(n₁ log n₁ + n₂ log n₂ + ... + nₖ log nₖ)

// Worst case (all numbers in one bucket):

// O(n log n)
// ✅ Total Time Complexity
// O(n log n)
// 💾 Space Complexity (SC)
// Extra space used:

// 1️⃣ Map storage

// map<int, vector<int>>

// Stores all n elements → O(n)

// 2️⃣ Result vector

// vector<int> result

// Stores n elements → O(n)

// 3️⃣ Temporary nums vector

// vector<int> nums = it.second;

// At most size n → O(n) (temporary)

// ✅ Total Space Complexity
// O(n)

// (extra space)

// 📌 Final Answer (Interview-ready)

// Time Complexity: O(n log n)
// Space Complexity: O(n)
