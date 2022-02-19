class Solution {
public:
    
    void dfs(vector<vector<char>>& grid , int i, int j)
    {
        if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j] != '1')
        {
            return;
        }
        
        grid[i][j] = '0';
        
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);

    }
    
    
    int numIslands(vector<vector<char>>& grid) 
    {
        int count_islands = 0;
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j] == '1')
                {
                    dfs(grid, i, j);
                    count_islands++;
                }
            }
        }
        
        return count_islands;
        
    }
};