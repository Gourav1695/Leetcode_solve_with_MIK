class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count = 0;
        int i = 0;
        int j = people.size()-1;
        sort(people.begin(),people.end());
        while(i<=j){
            if(people[i]+people[j]>limit){
                j--;
                count++;
            }
            else{
                j--;
                i++;
                count++;
            }
        }
        return count;
        
    }
};

// tc --> O(nlogn)
// sc --> O(1)
