class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        long long  n = bottomLeft.size();
        long long  maxSide = 0;
        for(int i = 0; i<n-1;i++)
        {
            for(int j = i+1; j<n;j++)
            {
                // top right x of intersection
                int xInT = min(topRight[j][0],topRight[i][0]);
                int xInB = max(bottomLeft[j][0],bottomLeft[i][0]);
                int  width = (xInT - xInB);
                
                int  yInT = min(topRight[j][1],topRight[i][1]);
                int  yInB = max(bottomLeft[j][1],bottomLeft[i][1]);
                int height = (yInT - yInB);
                long long side = min(width,height);
                maxSide = max(side,maxSide);

            }
        }
        return maxSide*maxSide;
    }
};

// tc -->O(n^2)
// sc -->O(1)
