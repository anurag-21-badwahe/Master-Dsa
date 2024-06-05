  vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>bfs;
        queue<int>q;
        int visited[V] = {0};
        visited[0] = 1;
        q.push(0);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it : adj[node]){
                if(!visited[it] == 1){
                    q.push(it);
                    visited[it] = 1;
                }
            }
        }
        return bfs;
    }