class Solution {
public:
    
    typedef long long ll;
    
    void dfs(int node, vector<int> adj[] , int &count, vector<bool>& vis)
    {
        vis[node] = true;
        count++;
        
        for(auto child : adj[node])
        {
            if(vis[child] == false)
            {
                dfs(child, adj, count, vis);
            }
        }
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) 
    {
        vector<int>adj[n];
        
        for(int i=0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        ll total_pairs = ((ll)n * (ll)(n-1))/2;
        
        vector<bool> visited(n,false);
        
        for(int i=0; i<n; i++)
        {
            if(visited[i] == false)
            {
                int count_nodes = 0;
                
                dfs(i, adj, count_nodes,visited);
                
                total_pairs -= ((ll)count_nodes*(count_nodes-1)/2);
                
            }
        }
        
    return total_pairs;
        
    }
};