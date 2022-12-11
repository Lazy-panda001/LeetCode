class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();
        
        for(int i=0; i<row; i++)
        {
            sort(grid[i].begin(), grid[i].end());
        }
        
        int ans = 0;
        
        
        for(int i=0; i<col; i++)
        {
            int maxValue = grid[0][i];
            
            for(int j=1; j<row; j++)
            {
                if(grid[j][i] > maxValue)
                {
                    maxValue = grid[j][i];
                }
            }
            
            ans+=maxValue;
        }
        
        return ans;
    }
};