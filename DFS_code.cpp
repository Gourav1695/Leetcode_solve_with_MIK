class Solution {
  public:
  void DFS(unordered_map<int,vector<int>>&adj,int u, vector<bool>&visited, vector<int>&result)
  {
      if(visited[u] == true) 
      return ;
     visited[u]=true;
     result.push_back(u);
     for(auto & v: adj[u]){
         if(!visited[v]){
             DFS(adj,v,visited,result);
         }
     }
  }
  
  
    vector<int> dfs(vector<vector<int>>& mp) {
        // Code here
        unordered_map<int,vector<int>>adj;
        int V = mp.size();
        for(int u = 0 ; u<V ; u++)
        {
            for(auto v = mp[u].begin();v!=mp[u].end(); v++)
            {
                adj[u].push_back(*v);
            }
        }
        vector<int>result;
        vector<bool>visited(V,false);
        DFS(adj,0,visited,result);
        return result;
        
    }
};
