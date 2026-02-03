class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n<=3){
            return false;
        }
        int i = 1;
        while(i<n && nums[i]>nums[i-1]){
            i++;
            cout<<i<<endl;
        }
        int p = i - 1;
        while(i<n && nums[i]<nums[i-1]){
            i++;
            cout<<"q"<<endl;
            cout<<i<<endl;
        }
        int q = i - 1;
        int flag = 0;
        while(i<n && nums[i]>nums[i-1]){
            i++;
            flag = i - 1;
            cout<<i<<endl;
        }
        
        // cout<< flag <<" "<< p <<" "<< q<<endl;
        if(flag == n-1 && p>0 && q!=p){
            return true;
        }
        return false;
    }
};

// tc -->O(n)
// sc -->O(1)
