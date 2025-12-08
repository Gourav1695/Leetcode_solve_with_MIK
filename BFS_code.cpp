class Solution {
  public:
  void BFS(unordered_map<int, vector<int>>&adj, int u, vector<bool>&visited, vector<int>&result)
  {
      queue<int>que;
      
      if(visited[u]== true) return;
      que.push(u);
      visited[u]=true;
      result.push_back(u);
      
      while(!que.empty()){
          int v = que.front();
          que.pop();
          for(auto it: adj[v]){
              if(!visited[it]){
                  visited[it]=true;
                  result.push_back(it);
                  que.push(it);
              }
          }
      }
  }
  
  
    vector<int> bfs(vector<vector<int>> &mp) {
        // code here
        unordered_map<int, vector<int>>adj;
        int V = mp.size();
        for(int u = 0 ; u < V; u++)
        {
            for(auto v = mp[u].begin(); v!= mp[u].end();v++)
            {
                adj[u].push_back(*v);
            }
        }
        vector<bool>visited(V,false);
        vector<int>result;
        BFS(adj, 0, visited, result);
        return result;
        }
};
