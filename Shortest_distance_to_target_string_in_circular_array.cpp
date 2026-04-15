class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int n = words.size();
        for(int i = 0; i<=words.size();i++)
        {
            if(words[i]==target){
                ans = min(ans,(i - startIndex + n)%n);
                ans = min(ans,(startIndex-i+n)%n);
            }
        }
        return ans==INT_MAX? -1: ans;
    }
};
// tc -->O(n*l)
// sc -->O(1)


// ----------- optimal appraoch MIK:--------
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int n = words.size();

        for(int i = 0; i<n;i++){
            if(words[i] == target){
            int stDist = abs(i - startIndex);
            int cirDist = abs(n - stDist);
            ans = min({ans, stDist, cirDist});
            }
        }
        return ans == INT_MAX? -1: ans;

    }
};

// tc -->O(n * l), here n is length of words vector, and l is the size of target for comparison
// sc -->O(1)
