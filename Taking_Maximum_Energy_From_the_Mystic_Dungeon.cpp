// this is top dowm dp

class Solution {
public:
    int solve(vector<int>&energy, int i,int k,vector<int>&dp)
    {
        if(i>=energy.size())
        {
            return 0;
        }
        // It is computed previously.
        if(dp[i]!=INT_MIN){
            return dp[i];
        }
        // if not then compute.
        return  dp[i]= energy[i]+solve(energy,i+k,k,dp);
    }
    int maximumEnergy(vector<int>& energy, int k) {
        int result=INT_MIN;
        vector<int>dp(energy.size(),INT_MIN);
        for(int i = 0; i< energy.size();i++)
        {
            result = max(result, solve(energy,i,k,dp));
        }
        return result;
    }
};

// tc -->(n)
// sc -->O(n/k)-->O(n)



// bottom up 

class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int>t = energy;
        for(int i = n-1; i>=0;i--)
        {
            if(i+k<n){
                t[i]=t[i+k]+energy[i];
            }
        }
        int maxm;
        maxm = *max_element(t.begin(),t.end());
        return maxm;
    }
};

// tc -->O(n)
// sc -->O(n)

// bottom up approach.
