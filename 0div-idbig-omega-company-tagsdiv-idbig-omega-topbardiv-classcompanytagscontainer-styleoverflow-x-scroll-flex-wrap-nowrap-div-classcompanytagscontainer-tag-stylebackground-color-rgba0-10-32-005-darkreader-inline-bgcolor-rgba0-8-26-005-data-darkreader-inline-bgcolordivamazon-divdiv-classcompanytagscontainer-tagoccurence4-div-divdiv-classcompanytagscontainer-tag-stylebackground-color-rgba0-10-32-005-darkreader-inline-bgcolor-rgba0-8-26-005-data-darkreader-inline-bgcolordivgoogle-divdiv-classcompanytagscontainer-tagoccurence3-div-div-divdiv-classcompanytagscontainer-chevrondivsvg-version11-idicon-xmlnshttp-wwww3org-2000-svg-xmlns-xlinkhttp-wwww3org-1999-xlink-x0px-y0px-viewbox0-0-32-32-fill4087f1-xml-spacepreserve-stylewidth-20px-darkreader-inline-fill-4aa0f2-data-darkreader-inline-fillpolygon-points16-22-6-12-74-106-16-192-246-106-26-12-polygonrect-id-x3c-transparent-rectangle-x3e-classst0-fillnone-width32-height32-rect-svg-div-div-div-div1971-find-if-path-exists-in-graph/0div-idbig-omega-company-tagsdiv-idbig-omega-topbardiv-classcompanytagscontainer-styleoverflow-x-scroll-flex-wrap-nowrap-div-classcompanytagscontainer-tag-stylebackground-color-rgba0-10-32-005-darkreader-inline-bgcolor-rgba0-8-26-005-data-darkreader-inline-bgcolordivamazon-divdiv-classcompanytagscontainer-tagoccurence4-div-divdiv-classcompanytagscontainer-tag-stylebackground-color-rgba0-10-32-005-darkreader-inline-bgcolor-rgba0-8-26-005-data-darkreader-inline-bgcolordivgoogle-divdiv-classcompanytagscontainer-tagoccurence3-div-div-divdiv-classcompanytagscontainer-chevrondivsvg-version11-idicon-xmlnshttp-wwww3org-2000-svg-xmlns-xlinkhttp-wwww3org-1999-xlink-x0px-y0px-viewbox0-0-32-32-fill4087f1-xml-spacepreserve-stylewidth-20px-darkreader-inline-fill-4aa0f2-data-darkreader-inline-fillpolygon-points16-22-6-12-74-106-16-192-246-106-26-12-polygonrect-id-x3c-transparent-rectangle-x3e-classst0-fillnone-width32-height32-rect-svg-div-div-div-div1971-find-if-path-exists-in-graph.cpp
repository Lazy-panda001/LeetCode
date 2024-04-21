class Solution {
public:
    
    void dfs(unordered_map<int,vector<int>> &adj, int source, vector<bool> &visited) {
        visited[source] = true;
        
        for(auto &nbr : adj[source]) {
            if(visited[nbr] == false) {
                dfs(adj, nbr, visited);
            }
        }
        
        return;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int,vector<int>> adj;
        
        for(int i=0; i<edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<bool> visited(n,false);
        
        dfs(adj, source, visited);
        
        if(visited[destination] == true) {
            return true;
        }
        
        return false;
    }
};