class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int land = INT_MAX;
        int water = INT_MAX;
        int min_land = INT_MAX;
        int min_water = INT_MAX;

        for(int i = 0; i<n;i++){
            land = min(land,landStartTime[i]+landDuration[i]);
        }
        for(int i = 0; i<m;i++){
            water = min(water,waterStartTime[i]+waterDuration[i]);
        }
        for(int i= 0; i< m ;i++){
            min_land = min(min_land, max(waterStartTime[i],land) +waterDuration[i]);
        }
        for(int i= 0; i< n ;i++){
            min_water = min(min_water, max(landStartTime[i],water) +landDuration[i]);
        }
        return min(min_land, min_water);
    }
};

// tc -->O(m+n)
// sc -->O(1)
