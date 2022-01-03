class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        if(n==1)
        {
            return 1;
        }
        
        vector<int>out_degree(n+1, 0);
        vector<int> in_degree(n+1, 0);
        
        for(auto edge : trust)
        {
            out_degree[edge[0]]++;
            in_degree[edge[1]]++;
        }
        
        // if out_degree ==0 and indegree n= n-1 then return that value;
        
        for(int i=1; i<=n;i++)
        {
            if(out_degree[i] == 0 and in_degree[i] == n-1)
            {
                return i;
            }
        }
        return -1;
        
    }
};