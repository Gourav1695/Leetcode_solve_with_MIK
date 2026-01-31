class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>diffArr(1001,0);
        for(auto &it: trips)
        {
            diffArr[it[1]]+=it[0];
            diffArr[it[2]]-=it[0];
        }
        int cummsum = 0;
        if(diffArr[0]>capacity){
            return false;
        }
        for(int i = 1; i<1001;i++)
        {
            diffArr[i]= diffArr[i]+diffArr[i-1];
            if(diffArr[i]>capacity){
                return false;
            }
        }
        return true;
    }
};

// tc -->O(n)
// sc -->O(1)
