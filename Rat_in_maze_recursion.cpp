class Solution {
  public:
  vector<string>result;
    void solve(int i, int j,vector<vector<int>>& maze,string &path){
        // base case 
        int n = maze.size();
        // vector<string>result;
        if(i<0 ||i>=n||j<0||j>=n||maze[i][j]==0){
            return;
        }
        if(i==maze.size()-1&& j==maze.size()-1){
            result.push_back(path);
            return;
        }
        
        // main starting 
        
        
        maze[i][j]=0;
        
        path.push_back('D'); // Down
        solve(i+1,j,maze, path);
        path.pop_back();
        
        path.push_back('L'); // Left
        solve(i,j-1,maze,path);
        path.pop_back(); // returning recursion
        
        path.push_back('R'); // Right
        solve(i,j+1,maze, path);
        path.pop_back();
        
       
        
        path.push_back('U'); // Up
        solve(i-1,j,maze, path);
        path.pop_back();
        maze[i][j] = 1; // returning from recursion so marking as 1
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        string path = "";
        // n = maze.size();
        solve(0,0,maze,path);
        return result;
        
    }
};

// tc -->O(4^(n^2)) and accurate O(3^(n^2))
// sc -->O(n^2)
