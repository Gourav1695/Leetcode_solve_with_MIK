class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>uniqueString;
            if(k > s.size()){
                return false;
            }
        for(int i = 0 ; i<=s.size()-k;i++)
        {
            uniqueString.insert(s.substr(i,k));
        }
        int size = uniqueString.size();
        if(size==(1<<k)){
            return true;
        }
        return false;
    }
};

// tc -->O(n*k)
// sc -->O(2^k*k)

// ✅ Time Complexity
// O(n * k)

// Why?

// Loop runs n − k + 1 ≈ O(n) times

// s.substr(i, k) copies k characters → O(k)

// unordered_set insert is O(1) average

// 👉 So total:

// O(n * k)

// ✅ Space Complexity

// You wrote:

// O(2^k)

// That’s almost right, but let’s be precise.

// What’s stored?

// At most 2^k unique binary strings

// Each string has length k

// So actual space is:

// O(2^k * k)

// In interviews:

// Saying O(2^k) is usually acceptable

// Saying O(2^k * k) is technically correct and stronger

// ✔️ Best answer:

// Space: O(2^k * k)


//------------- Approach MIK------------
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>uniqueString;
        int code = 1<<k;
            if(k > s.size()){
                return false;
            }
        for(int i = k ; i<=s.size();i++)
        {
            uniqueString.insert(s.substr(i-k,k));
            if(uniqueString.size()==code){
                return true;
            }
        }
        int size = uniqueString.size();
        if(size==(1<<k)){
            return true;
        }
        return false;
    }
};

// tc -->O(n*k)
// sc -->O(2^k*k)

// ✅ Time Complexity
// O(n * k)

// Why?

// Loop runs n − k + 1 ≈ O(n) times

// s.substr(i, k) copies k characters → O(k)

// unordered_set insert is O(1) average

// 👉 So total:

// O(n * k)

// ✅ Space Complexity

// You wrote:

// O(2^k)

// That’s almost right, but let’s be precise.

// What’s stored?

// At most 2^k unique binary strings

// Each string has length k

// So actual space is:

// O(2^k * k)

// In interviews:

// Saying O(2^k) is usually acceptable

// Saying O(2^k * k) is technically correct and stronger

// ✔️ Best answer:

// Space: O(2^k * k)
