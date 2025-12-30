class Solution {
public:
    bool isMagicSquare(vector<vector<int>>&grid,int r,int c){
        // no dublicate -- done 
        // no element less than 1 and not greater than 9 -- done
        // check the sum for row, cols, diagolans and antidiagonal should be same for magic square -- done

        unordered_set<int>st;
        for(int i = 0; i<3;i++)
        {
            for(int j = 0; j<3; j++){
                if(grid[r+i][c+j]<1||grid[r+i][c+j]>9||st.count(grid[r+i][c+j]))
                {
                    return false;
                }
                st.insert(grid[r+i][c+j]);
            }
        }
        int SUM  = grid[r][c]+grid[r][c+1]+grid[r][c+2];
        // for rows check and columns checks
        for(int i = 0 ; i<3;i++)
        {
            if(grid[r+i][c]+grid[r+i][c+1]+grid[r+i][c+2] != SUM){ // for rows
                return false;
            }
            if(grid[r][c+i]+grid[r+1][c+i]+grid[r+2][c+i] != SUM){ // for columns
                return false;
            }
        }
        if(grid[r][c]+grid[r+1][c+1]+grid[r+2][c+2] != SUM) // diagonal check
        {
            return false;
        }
        if(grid[r][c+2]+grid[r+1][c+1]+ grid[r+2][c] != SUM){ // for antidiagonal check
            return false;
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        // FOCUS FOCUS FOCUS
        int row = grid.size();
        int cols = grid[0].size();

        int count = 0;

        for(int i = 0; i<=row-3;i++)
        {
            for(int j = 0; j<=cols-3;j++)
            {
                if(isMagicSquare(grid,i,j))
                count++;
            }
        }
        return count;
    }
};

// tc --> O(m*n)
// sc --> O(1)
