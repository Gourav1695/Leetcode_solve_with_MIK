class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        int res = 0;
        for(auto & it: apple)
        {
            sum +=it;
        }
        sort(capacity.begin(),capacity.end(),greater<int>());
        int count=1;
        res = capacity[0];
        for(int i =1; i<capacity.size(); i++)
        {
            if(res>=sum){
                return count;
            }
            else{
                res+=capacity[i];
                count++;
            }
        }
        return count;
    }
};
// tc -->O(nlogn)
// sc -->O(1)
