class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        // two pointers apporach
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        int maxm = 0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                maxm = max(maxm,(j-i));
                j++;
            }
            else{
                i++;
                if(i>j) j = i;
            }
        }
        return maxm;
    }
};

// tc -->O(n + m)
// sc -->O(1)
