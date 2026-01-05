class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = row;
        int negCount = 0;
        int MinElement = INT_MAX;
        long long sum = 0;
        for(int i = 0; i<row;i++)
        {
            for(int j = 0; j<col;j++)
            {
                if (matrix[i][j]<=0)
                {
                    negCount++;
                }
                MinElement = min(MinElement, abs(matrix[i][j]));
                sum +=abs(matrix[i][j]);
            }           
        }
        cout<<"sum "<<sum<<endl;
        cout<<"hi "<<negCount<<endl;
        cout<<"MinElement "<<MinElement<<endl;
            if (negCount%2==0)
            {
                return sum ;
            }
            else{
                return sum - 2*MinElement;
            }
        return -1;
    }
};

// tc -->O(n^2)
// sc -->O(1)
