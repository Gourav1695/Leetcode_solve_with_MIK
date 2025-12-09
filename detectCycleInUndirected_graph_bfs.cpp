class Solution {
      public:
    bool isCycleBFS(vector<vector<int>>& adj, int u , vector<bool>&visited){
        queue<pair<int,int>>que;
        que.push({u,-1});
        visited[u]= true;
        
        while(!que.empty())
        {
            pair<int,int>p = que.front();
                que.pop();
                int source = p.first;
                int parent = p.second;
            for(auto &v: adj[source])
            {
                if(visited[v]==false)
                {
                    visited[v]=true;
                    que.push({v,source});
                }
                else if(v!=parent){
                    return true;
                }
            }
        }
        return false;
        
    }
      bool isCycle(int V, vector<vector<int>>& edges) {
          // Code here
          vector<bool>visited(V,false);
          vector<vector<int>>adj(V);
          for(auto &vec : edges){
              int u = vec[0];
              int v = vec[1];
              adj[u].push_back(v);
              adj[v].push_back(u);
          }
          for(int i = 0; i<V; i++)
          {
              if(!visited[i] && isCycleBFS(adj, i, visited)){
                  return true;
              }
          }
          return false;
      }
  };
