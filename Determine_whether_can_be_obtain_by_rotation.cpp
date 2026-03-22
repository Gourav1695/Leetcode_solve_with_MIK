class Solution {
public:
void solve(vector<vector<int>>&mat,int n, int m){
    for(int i = 0 ; i<n; i++){
        for(int j = i; j<m ; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i = 0; i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int k = 0 ; k<4; k++){
            bool equal = true;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m ; j++){
                if(mat[i][j]!=target[i][j]){
                    equal = false;
                    break;
                }
            }
            if(equal== false)
            break;      
        }
        if(equal== true) return true;
        solve(mat,n,m);
        }

     return false;
    }
};

// tc -->O(n^2)
// sc -->O(1)
