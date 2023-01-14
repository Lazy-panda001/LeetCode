class Solution {
public:
    
    
    char dfs(  unordered_map<char,vector<char>> &adj, char curr_ch, vector<int> &visited) {
        visited[curr_ch - 'a'] = 1;
        
        char minChar = curr_ch;
        
        for(auto nbr : adj[curr_ch])
        {
            if(visited[nbr - 'a'] == 0)
            {
                minChar = min(minChar, dfs(adj, nbr, visited));
            }
        }
        
        return minChar;
    }
    
    
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        
        int n = s1.size();
        
        unordered_map<char,vector<char>> adj;
        
        for(int i=0; i<n; i++) {
            char u = s1[i];
            char v = s2[i];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        string result;
        
        for(int i=0; i<baseStr.size(); i++) {
            char ch = baseStr[i];
            
            vector<int> visited(26,0);
            
            char res = dfs(adj,ch,visited);
            
            result.push_back(res);
        }
        
        return result;
        
    }
};