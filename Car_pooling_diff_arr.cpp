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


// ----------------------- Line Sweep Algorithm solution:-----------------
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>mp;
        for(auto &it: trips){
            mp[it[1]]+=it[0];
            mp[it[2]]-=it[0];
        }
        int sum =0;
        for(auto & it: mp)
        {
            sum +=it.second;
            if(sum>capacity)
            {
                return false;
            }
        }
        return true;
    }
};

// tc --> O(nlogn)
// sc --> O(n)
