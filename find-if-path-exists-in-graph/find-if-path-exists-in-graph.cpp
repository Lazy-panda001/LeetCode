class Solution {
public:
    
    void dfs(vector<int> adj[] , int src , vector<bool>&visited)
    {
        visited[src] = true; // visited each current vertex
        
        for(auto nbr : adj[src])
        {
            if(visited[nbr] == false)
            {
                dfs(adj,nbr, visited);
            }
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) 
    {
        vector<int>adj[n]; // adjacency matrix
        
        int edge= edges.size();
        for(int i=0; i<edge; i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<bool> visited(n, false);
        dfs(adj , start, visited);
        
        // last vertes == destination should also be visited
        if(visited[end] == true)
        {
            return true;
        }
        return false;
        
    }
};