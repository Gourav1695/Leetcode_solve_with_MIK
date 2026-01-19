// Approach -1 (using 2d prefix sum and finding  best side square)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
class Solution {
public:
    int maxSideLength(vector<vector<int>>&mat, int threshold){
        int rows = mat.size();
        int cols = mat[0].size();

        vector<vector<int>>prefix(rows,vector<int>(cols,0));

        // Build prefix sum 
        for(int i=0;i<rows;i++){ // tc --> O(rows * cols)
            for(int j = 0; j<cols; j++){
                prefix[i][j] = mat[i][j]+
                (i>0 ? prefix[i-1][j] :0)
                +(j>0 ? prefix[i][j-1]: 0)
                - (i>0 && j>0 ? prefix[i-1][j-1]:0);
            }
        }

        // Helper lambda to get sum of the square
        auto sumSquare = [&](int i, int j, int r2, int c2){ // tc --> O(1)
            int sum = prefix[r2][c2]; 
            if(i>0) sum -= prefix[i-1][c2];
            if(j>0) sum -= prefix[r2][j-1];
            if(i>0 && j>0) sum += prefix[i-1][j-1];

            return sum;
        };
        int best = 0;

        for(int i =0; i<rows;i++){
            for(int j = 0; j<cols;j++){
                for(int k = best; k<min(rows-i,cols-j);k++){

                    // bottom right cell (r2,c2)
                    int r2 = i+k;
                    int c2 = j+k;

                    int sum = sumSquare(i,j,r2,c2);
                    if(sum <= threshold){
                        best = k+1; // offset +1 gives the side of the square
                        
                    }
                    else{
                        break; // because sum will increase only. Better move to next cell
                    }
                }
            }
        }
        return best;
    }
};

// int main() {
//     Solution sol;
//     vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int threshold = 20;
//     int result = sol.maxSideLength(mat, threshold);
//     cout << "Max side length: " << result << endl;
//     return 0;
// }


// tc --> O(rows*cols* min(rows, cols))
// sc --> O(rows*cols)
