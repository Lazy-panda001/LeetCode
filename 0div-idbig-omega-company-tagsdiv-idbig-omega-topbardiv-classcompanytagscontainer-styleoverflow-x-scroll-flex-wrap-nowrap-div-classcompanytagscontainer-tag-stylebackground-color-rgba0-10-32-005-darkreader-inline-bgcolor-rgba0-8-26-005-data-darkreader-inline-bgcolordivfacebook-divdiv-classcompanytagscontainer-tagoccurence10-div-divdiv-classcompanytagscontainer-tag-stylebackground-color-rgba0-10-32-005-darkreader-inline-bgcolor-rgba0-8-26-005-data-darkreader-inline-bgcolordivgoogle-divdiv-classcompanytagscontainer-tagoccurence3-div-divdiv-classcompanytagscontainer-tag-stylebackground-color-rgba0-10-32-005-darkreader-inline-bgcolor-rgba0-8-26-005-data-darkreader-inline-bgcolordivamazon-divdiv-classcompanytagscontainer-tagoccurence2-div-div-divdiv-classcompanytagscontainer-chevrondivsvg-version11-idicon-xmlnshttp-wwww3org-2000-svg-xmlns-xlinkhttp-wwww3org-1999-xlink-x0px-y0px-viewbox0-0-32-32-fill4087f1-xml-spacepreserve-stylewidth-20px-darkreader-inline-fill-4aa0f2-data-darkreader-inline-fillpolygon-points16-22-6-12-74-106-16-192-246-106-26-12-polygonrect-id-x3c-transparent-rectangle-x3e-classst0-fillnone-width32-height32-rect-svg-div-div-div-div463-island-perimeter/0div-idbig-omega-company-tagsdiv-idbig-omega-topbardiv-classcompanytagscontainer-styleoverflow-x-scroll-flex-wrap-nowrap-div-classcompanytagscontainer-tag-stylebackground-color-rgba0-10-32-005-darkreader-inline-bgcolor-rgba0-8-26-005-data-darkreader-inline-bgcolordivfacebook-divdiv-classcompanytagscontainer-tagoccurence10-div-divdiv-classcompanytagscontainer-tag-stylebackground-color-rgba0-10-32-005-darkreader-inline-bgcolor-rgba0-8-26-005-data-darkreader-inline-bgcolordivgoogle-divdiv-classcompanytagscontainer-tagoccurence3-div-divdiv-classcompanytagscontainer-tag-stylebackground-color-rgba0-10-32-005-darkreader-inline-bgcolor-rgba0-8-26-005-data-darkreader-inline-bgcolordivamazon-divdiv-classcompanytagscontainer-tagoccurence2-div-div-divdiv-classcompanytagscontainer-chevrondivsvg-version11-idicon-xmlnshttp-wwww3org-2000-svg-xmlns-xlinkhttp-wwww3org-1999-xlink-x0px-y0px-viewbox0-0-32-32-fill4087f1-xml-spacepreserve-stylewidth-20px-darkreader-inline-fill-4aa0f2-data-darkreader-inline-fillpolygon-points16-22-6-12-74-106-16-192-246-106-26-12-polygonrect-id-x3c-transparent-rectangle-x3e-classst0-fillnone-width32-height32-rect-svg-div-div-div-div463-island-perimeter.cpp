class Solution {
public:
    
    
    void func(vector<vector<int>>& grid, int i, int j, int &peri) {
        if(i < 0 or i>= grid.size() or j < 0 or j>= grid[0].size() or grid[i][j] == 0) {
            peri++;
            return;
        }
        
        if(grid[i][j] == -1) {
            return;
        }
        
        grid[i][j] = -1;
        
        func(grid,i+1,j,peri);
        func(grid,i+1,j,peri);
        func(grid,i,j+1,peri);
        func(grid,i,j-1,peri);
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        int peri = 0;
        
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(grid[i][j] == 1) {
                    func(grid,i,j,peri);
                }
            }
        }
        
        return peri;
    }
};