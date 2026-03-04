class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        // brute force way
        int m = mat.size();
        int n = mat[0].size();
        int result = 0;
        for(int row = 0; row<m; row++)
        {
            for(int col = 0 ; col<n; col++)
            {
                if(mat[row][col]==0)
                continue;
                bool special = true;
                for(int k = 0; k<m;k++){
                    if(k!=row && mat[k][col]==1){
                        special = false;
                        break;
                    }
                }
                for(int k = 0; k<n;k++){
                    if(k!=col && mat[row][k]==1){
                        special = false;
                        break;
                    }
                }
                if(special)
                result +=1;
            }
        }
        return result;
    }
};

// tc -->O(m*n+(m+n))
// sc -->O(1)


// ---------------- Optimal Approach : ---------------
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int>rowCount(m,0);
        vector<int>colCount(n,0);
        int result = 0;
        for(int row = 0 ; row<m ; row++){
            for(int col = 0 ; col<n ; col++)
            {
                if(mat[row][col]==1){
                rowCount[row]++;
                colCount[col]++;
                }
            }
        }
        for(int row = 0 ; row<m; row++){
            for(int col = 0 ; col<n; col++){
                if(mat[row][col]==0)
                continue;
                if(rowCount[row] == 1 && colCount[col] == 1){
                    result ++;
                }
            }
        }
        return result;
    }
};

// tc -->O(m*n)
// sc -->O(m+n)
