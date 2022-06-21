class Solution {
public:
    bool flag;
    
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j)
    {
        if(i<0 or i>= grid1.size() or j<0 or j>= grid1[0].size() or grid2[i][j] != 1)
            return;
        
        if(grid1[i][j] == 0)
        {
            flag = false;
            return;
        }
        
        grid2[i][j] = 0;
        
        dfs(grid1, grid2, i+1, j);
        dfs(grid1, grid2, i-1, j);
        dfs(grid1, grid2, i, j+1);
        dfs(grid1, grid2, i, j-1);
    
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
    {
        int row = grid1.size();
        int col = grid1[0].size();
        
        int sub_islands = 0;
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid2[i][j] == 1)
                {
                    flag = true;
                    dfs(grid1, grid2, i,j);
                    
                    if(flag)
                    {
                        sub_islands +=1;
                    }
                }
            }
        }
        
        return sub_islands;
        
    }
};