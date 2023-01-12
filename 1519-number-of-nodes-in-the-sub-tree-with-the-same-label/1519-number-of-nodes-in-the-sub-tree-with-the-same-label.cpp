class Solution {
public:
    
    vector<vector<int>> adj;
    vector<int> ans;
    
    
    void dfs(string &labels, int src, int prnt , vector<int>&freq)
    {
        int prev_count = freq[labels[src] - 'a'];
        
        freq[labels[src]-'a']++;
        
        for(auto nbr : adj[src])
        {
            if(nbr != prnt)
            {
                dfs(labels, nbr , src, freq);
            }
        }
        
        ans[src] = freq[labels[src] - 'a'] - prev_count;
        
    }
    
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) 
    {
        // abaedcd
        // 0123456
        
        ans.resize(n);
        adj.resize(n);
        
        vector<int> freq(26,0);
        
        for(auto it : edges)
        {
           adj[it[0]].push_back(it[1]);
           adj[it[1]].push_back(it[0]); 
        }
        
        dfs(labels, 0, -1, freq);
        
        return ans;
    }
};