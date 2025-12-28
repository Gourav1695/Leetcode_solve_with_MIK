class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size();
        int column = grid[0].size();
        int count = 0;
        for(int i = 0; i<row; i++)
        {
            for (int j = 0; j<column;j++)
            {
                if(grid[i][j]<0)
                count++;
            }

        }
        return count;
    }
};

// tc --> O(n*m)
// sc --> O(1)

// --------- optimal solution---------

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rowsize = grid.size();
        int columnsize = grid[0].size();
        int count=0;

        for(auto &row: grid)
        {
            int idx = upper_bound(begin(row),end(row),0,greater<int>()) - begin(row);
            count+=(columnsize-idx);
        }
        return count;
    }
};

// tc --> O(m * logn)
// sc --> O(1)
