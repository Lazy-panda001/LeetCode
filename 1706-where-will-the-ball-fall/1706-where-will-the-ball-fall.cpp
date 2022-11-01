class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<int>res(col,0);
        
        for(int ball=0; ball<col; ball++)
        {
            int cpos_b = ball;
            int npos_b = -1;
            
            for(int i=0; i<row; i++)
            {
                npos_b = cpos_b + grid[i][cpos_b];
                
                if(npos_b<0 or npos_b>= col or grid[i][cpos_b] != grid[i][npos_b])
                {
                    cpos_b = -1;
                    break;
                }
                
                cpos_b = npos_b;
            }
            
            res[ball] = cpos_b;
            
        }
        return res;
        
    }
};