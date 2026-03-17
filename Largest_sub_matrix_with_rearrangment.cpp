class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        // row
        // col
        // then find heights for each row,
        // then find base and max height and return the ans;

        // Row
        int m = matrix.size();
        // col
        int n = matrix[0].size();
        int maxAns = 0;

        for(int row = 0; row<m ; row++){
            for(int col = 0 ;col < n ; col++){
                if(matrix[row][col]==1 && row-1>=0){
                    matrix[row][col]+= matrix[row-1][col];
                }
            }
            vector<int>heights = matrix[row];
            sort(heights.begin(),heights.end(), greater<int>());
            for(int i = 0 ; i<n ; i++){
            int base = i+1;
            int height = heights[i];
            maxAns = max(maxAns,base*height);
        }
        }
      
        return maxAns;
    }
};

// tc -->O(m * nlogn)
// sc -->O(n)
