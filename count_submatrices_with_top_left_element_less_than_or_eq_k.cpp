class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int m = grid.size(); // row
        int n = grid[0].size(); // column
        int count = 0;

        for(int i = 0; i<m;i++)
        {
            for(int j = 0; j<n ;j++){
                grid[i][j]+=
                    ((i>0)?grid[i-1][j]:0)
                    +((j>0)?grid[i][j-1]:0) 
                    - ((i>0 && j>0)? grid[i-1][j-1]:0);

                if(grid[i][j]<=k){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};

// tc -->O(m*n)
// sc -->O(1)
