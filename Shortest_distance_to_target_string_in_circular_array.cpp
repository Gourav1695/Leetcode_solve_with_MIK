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
// tc -->O(n)
// sc -->O(1)
