class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        // steps:
        // 1. make endZeros vector and fill it.
        // 2. calculate the steps for each row to make it the required way.
        // 3. rearrange the endZeros accordingly.
        // 4. add up all the steps and return as answer.

        int n = grid.size(); // row and column are of same size

        vector<int>endZeros(n,0);

        for(int i = 0; i<n;i++)
        {
            int j = n -1 ;
            int count = 0;
            while(j>=0 && grid[i][j]==0)
            {
                count++;
                j--;
            }
            endZeros[i] = count;
        }

        int steps = 0;
    
        for(int i = 0; i<n; i++)
        {
            int need = n - i - 1;
            int j = i;
            while(j<n && endZeros[j]<need){
                j++;
            }
            if(j==n){
                return -1;
            }

            steps += j-i;
            while(j>i){
                swap(endZeros[j],endZeros[j-1]);
                j--;
            }

        }
        return steps;


    }
};

// tc -->O(n^2)
// sc -->O(n)
