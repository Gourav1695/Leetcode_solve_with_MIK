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


// ------------ Bruit force solution:--------------
class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int m = grid.size(); // row
        int n = grid[0].size(); // column
        int count = 0;
        
        for(int i = 0; i<m;i++)
        {
            for(int j = 0; j<n ;j++){
                int sum = 0;
                for(int k = 0; k<=i; k++){
                    for(int l = 0 ; l <=j; l++){
                        sum +=grid[k][l];
                    }
                }
                if(sum<=k){
                    count++;
                }
            }
        }
        return count;
    }
};

// tc -->O(m^2*n^2)
// sc -->O(1)
