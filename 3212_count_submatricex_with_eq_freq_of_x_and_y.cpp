class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int count = 0;
        vector<vector<int>>cumSumX(m,vector<int>(n,0));
        vector<vector<int>>cumSumY(m,vector<int>(n,0));

        for(int i = 0; i<m ; i++)
        {
            for(int j = 0 ; j<n; j++){
                cumSumX[i][j]=(grid[i][j]=='X');
                cumSumY[i][j]=(grid[i][j]=='Y');

                cumSumX[i][j] += 
                ((i-1>=0)?cumSumX[i-1][j]:0) 
                + ((j-1>=0)?cumSumX[i][j-1] :0 )
                - ((i-1>=0 && j-1>=0) ? cumSumX[i-1][j-1] :0) ;
                cumSumY[i][j] += 
                ((i-1>=0)?cumSumY[i-1][j]:0) 
                + ((j-1>=0)?cumSumY[i][j-1] :0 )
                - ((i-1>=0 && j-1>=0) ? cumSumY[i-1][j-1] :0) ;

                if(cumSumX[i][j]==cumSumY[i][j] && cumSumX[i][j]>0){
                    count++;
                }
            }
        }
        return count;

    }
};

// tc -->O(m*n)
// sc -->O(1)
