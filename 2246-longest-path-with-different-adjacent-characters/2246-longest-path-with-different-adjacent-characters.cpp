class Solution {
public:
    
    vector<vector<int>> adj;
    vector<int>dist;
    int ans = 1;
    
    void dfs(int src, string &str) {
        
        dist[src] = 1;
        
        for(auto nbr : adj[src])
        {
            dfs(nbr,str);
            
            if(str[nbr] != str[src]) {
                ans = max(ans, dist[nbr] + dist[src]);
                dist[src] = max(dist[src], dist[nbr] + 1);
            }
        }
        
    }
    
    int longestPath(vector<int>& parent, string str) {
        
        // Microsoft Question
        
        int n = parent.size();
        
        adj.resize(n);
        dist.resize(n);
        
        for(int i=1; i<n; i++) {
            adj[parent[i]].push_back(i);
        }
        
        dfs(0, str);
        
        return ans;
        
    }
};