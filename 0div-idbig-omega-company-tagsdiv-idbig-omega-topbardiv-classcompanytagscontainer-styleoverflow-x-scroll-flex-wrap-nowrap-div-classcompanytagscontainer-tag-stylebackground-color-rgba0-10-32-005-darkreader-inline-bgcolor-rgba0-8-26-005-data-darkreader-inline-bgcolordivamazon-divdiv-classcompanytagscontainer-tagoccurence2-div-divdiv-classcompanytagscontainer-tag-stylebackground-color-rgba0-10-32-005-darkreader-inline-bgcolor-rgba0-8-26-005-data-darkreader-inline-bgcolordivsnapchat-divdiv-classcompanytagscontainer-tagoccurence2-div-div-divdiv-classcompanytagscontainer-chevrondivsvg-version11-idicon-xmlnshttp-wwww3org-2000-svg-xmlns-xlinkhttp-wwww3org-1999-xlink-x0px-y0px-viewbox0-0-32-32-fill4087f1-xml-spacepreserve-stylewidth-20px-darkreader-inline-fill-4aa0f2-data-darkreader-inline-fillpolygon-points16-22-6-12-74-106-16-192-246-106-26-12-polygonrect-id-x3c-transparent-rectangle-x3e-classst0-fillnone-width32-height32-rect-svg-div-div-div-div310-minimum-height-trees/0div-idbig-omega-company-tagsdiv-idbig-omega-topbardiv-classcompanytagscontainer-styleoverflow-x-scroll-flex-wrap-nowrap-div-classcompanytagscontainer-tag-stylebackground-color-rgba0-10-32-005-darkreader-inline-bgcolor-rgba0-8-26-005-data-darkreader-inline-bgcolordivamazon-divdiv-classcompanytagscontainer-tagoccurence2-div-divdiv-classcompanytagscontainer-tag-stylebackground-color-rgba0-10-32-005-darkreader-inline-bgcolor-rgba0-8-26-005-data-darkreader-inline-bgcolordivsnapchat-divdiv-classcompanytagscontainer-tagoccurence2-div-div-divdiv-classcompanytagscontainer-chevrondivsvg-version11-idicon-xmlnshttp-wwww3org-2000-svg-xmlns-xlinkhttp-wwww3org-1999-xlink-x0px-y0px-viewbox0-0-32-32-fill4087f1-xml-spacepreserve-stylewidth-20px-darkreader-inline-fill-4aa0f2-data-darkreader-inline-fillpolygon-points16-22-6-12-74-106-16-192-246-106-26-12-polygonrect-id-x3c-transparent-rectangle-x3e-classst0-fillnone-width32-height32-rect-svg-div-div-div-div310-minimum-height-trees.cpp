class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;
        vector<int> indegree(n);
        
        if(n == 1) {
            return {0};
        }
        
        for(auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            indegree[u]++;
            indegree[v]++;
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        queue<int> qu;
        
        for(int i=0; i<n; i++) {
            if(indegree[i] == 1) {
                qu.push(i);
            }
        }
        
        vector<int> res;
        
        while(n > 2) {
            int size = qu.size();
            
            n = n - size;
            
            while(size--) {
                int u = qu.front();
                qu.pop();
                
                for(auto &v : adj[u]) {
                    indegree[v]--;
                    if(indegree[v] == 1) {
                        qu.push(v);
                    }
                }
            }
            
    }
         while(!qu.empty()) {
                res.push_back(qu.front());
                qu.pop();
            }
            
            return res;
        }
};