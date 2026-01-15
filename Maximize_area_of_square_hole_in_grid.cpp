class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());

        int hconsecutive = 1;
        int vconsecutive = 1;

        int currConsecutive = 1;
        for(int i = 1; i<hBars.size();i++)
        {
            if(hBars[i]-hBars[i-1]==1){
                currConsecutive++;
            }
            else{
                currConsecutive = 1; 
            }
            hconsecutive = max(hconsecutive,currConsecutive);
        }
        currConsecutive = 1;
        for(int j = 1; j<vBars.size();j++)
        {
            if(vBars[j]-vBars[j-1]==1){
                currConsecutive++;
            }
            else{
                currConsecutive = 1; 
            }
            vconsecutive = max(vconsecutive,currConsecutive);
        }
        cout<<vconsecutive<<" "<<hconsecutive<<endl;
        int MinVorH = min(vconsecutive,hconsecutive)+1;
        int ans = MinVorH*MinVorH;
        return ans;
    }
};

// tc --> O(Nlogn + Mlogm)
// sc --> O(1)
