class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int total = 0;
       for(int i = 0; i<cost.size(); i++){
        total+=cost[i];
       } 
       if(cost.size()==1||cost.size()==2){
        return total;
       }
       sort(cost.rbegin(),cost.rend());
       int rem = 0;
       for(int i = 2;i<cost.size();i+=3){
            rem +=cost[i];
       }
       return total-rem;
    }
};

// tc-->O(nlogn)
// sc -->O(1)


// -------------- optimal approach : -------------
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans = 0;
        sort(cost.rbegin(),cost.rend());
        for(int i = 0; i<cost.size();i++){
            if((i+1)%3==0) continue;
            ans+=cost[i];
        }
        return ans;
    }
};

// tc --> O(nlogn)
// sc --> O(1)
