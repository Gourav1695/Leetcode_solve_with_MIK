class Solution {
public:
    typedef long long ll;
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        ll i = 0;
        ll j = 0;
        ll maxArrLen = 0 ;
        ll n = nums.size();
        while(j<n && i<n){
           if(nums[j]<=(ll)k*nums[i]){
                maxArrLen = max(maxArrLen,(j-i+1));
                j++;
           }
           else{
            i++;
           }
        }
        return n- maxArrLen;
    }
};

// tc --> O(nlogn)
// sc --> O(1)
