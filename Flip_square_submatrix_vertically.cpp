class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int startrow = x;
        int endrow = x+k-1;

        for(int i = x; i<=(x)+(k-1)/2; i++)
        {
            for(int j = y; j <= y+k-1;j++){
                swap(grid[startrow][j],grid[endrow][j]);
            }
            endrow--;
            startrow++;
        }
    return grid;
    }
};

// tc --> O(k^2)
// sc --> O(1)

//------------ MIK's style:-------------

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int startrow = x;
        int startcol = y;
        int endrow = x+k-1;
        int endcol = y+k-1;

        for(int i = startrow; i<=endrow; i++)
        {
            for(int j = startcol; j <= endcol;j++){
                swap(grid[i][j],grid[endrow][j]);
            }
            endrow--;
        }
        return grid;
    }
};

// tc --> O(k^2)
// sc --> O(1)
