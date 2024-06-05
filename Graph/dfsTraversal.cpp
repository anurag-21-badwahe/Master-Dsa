private:
    void solve(int node,vector<int> adj[],vector<int>&dfs,int visited[]){
        visited[node] = 1;
        dfs.push_back(node);
        
        for(int it : adj[node]){
            if(!visited[it])solve(it,adj,dfs,visited);
        }
    }
    
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       int visited[V] = {0};
       vector<int> dfs;
       solve(0,adj,dfs,visited);
       return dfs;
    }