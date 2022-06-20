class Solution {
public:
    
    void dfs(vector<vector<int>>& grid, int i, int j)
    {
        if(i<0 or i>= grid.size() or j<0 or j>= grid[0].size() or grid[i][j] != 0)
            return;
        
        grid[i][j] = 1;
        
        dfs(grid, i+1,j);
        dfs(grid, i-1,j);
        dfs(grid, i,j+1);
        dfs(grid, i,j-1);
        return;
    }
    
    int closedIsland(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i=0; i<row; i++)
        {
            dfs(grid,i,0);
            dfs(grid,i,col-1);
        }
        
        for(int j=0; j<col; j++)
        {
            dfs(grid,0,j);
            dfs(grid , row-1, j);
        }
        
        int closed_islands=0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j] == 0)
                {
                    dfs(grid, i, j);
                    closed_islands++;
                }
            }
        }

        return closed_islands;
    }
};