class Solution 
{
public:
    vector<vector<int>> all_path;
    
    void dfs(vector<vector<int>> adj_list , int src ,int des ,  vector<int>&each_path)
    {
        
        if(src == des)
        {
            all_path.push_back(each_path);
            return;
        }
        
        for(auto nbr : adj_list[src])
        {
            each_path.push_back(nbr);  // pushing 
            dfs(adj_list, nbr , des , each_path); // calling dfs
            each_path.pop_back(); // backtracking
        }
    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& adj_list) 
    {
        vector<int> each_path;
        
        int n = adj_list.size();
        
      //  vector<int> adj_list[n];
        
       /* for(int i=0; i<n; i++)  // it will make the adjacency list of the graph
        {
            for(int j=0;j<graph[i].size();j++)
            {
                adj_list[i].push_back(graph[i][j]);
            }
        }
        */
        each_path.push_back(0);
        dfs(adj_list , 0 , n-1, each_path);
        
        
        return all_path;
        
    }
};