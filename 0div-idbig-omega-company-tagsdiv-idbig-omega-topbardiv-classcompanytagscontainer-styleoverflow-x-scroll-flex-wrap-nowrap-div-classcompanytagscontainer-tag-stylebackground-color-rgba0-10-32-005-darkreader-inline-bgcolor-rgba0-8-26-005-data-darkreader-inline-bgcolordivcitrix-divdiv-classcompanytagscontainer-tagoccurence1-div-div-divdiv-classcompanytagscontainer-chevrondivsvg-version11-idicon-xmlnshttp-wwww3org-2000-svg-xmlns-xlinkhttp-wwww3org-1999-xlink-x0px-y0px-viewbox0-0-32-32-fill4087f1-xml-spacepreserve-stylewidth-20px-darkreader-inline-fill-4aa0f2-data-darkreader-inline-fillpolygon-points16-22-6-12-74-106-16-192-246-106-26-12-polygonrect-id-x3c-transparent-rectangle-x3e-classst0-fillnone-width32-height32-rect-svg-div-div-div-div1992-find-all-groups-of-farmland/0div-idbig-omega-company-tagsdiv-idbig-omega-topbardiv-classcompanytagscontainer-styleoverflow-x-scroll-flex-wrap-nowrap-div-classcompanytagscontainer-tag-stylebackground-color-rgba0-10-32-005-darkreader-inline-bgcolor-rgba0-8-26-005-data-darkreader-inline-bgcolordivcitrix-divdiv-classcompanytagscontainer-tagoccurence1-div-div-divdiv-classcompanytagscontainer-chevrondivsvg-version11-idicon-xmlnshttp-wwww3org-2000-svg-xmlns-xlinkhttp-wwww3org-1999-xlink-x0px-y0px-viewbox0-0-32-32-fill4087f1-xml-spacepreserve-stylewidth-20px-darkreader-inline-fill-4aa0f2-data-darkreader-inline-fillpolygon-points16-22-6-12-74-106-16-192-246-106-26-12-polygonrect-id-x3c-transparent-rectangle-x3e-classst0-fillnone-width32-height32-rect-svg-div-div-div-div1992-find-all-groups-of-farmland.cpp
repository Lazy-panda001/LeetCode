class Solution {
public:
    
    void dfs(vector<vector<int>>& land, int i, int j, int &r2, int &c2) {
        
        if(i < 0 or i>= land.size() or j<0 or j>= land[0].size() or land[i][j] == 0) {
            return;
        }
        
        land[i][j] = 0;
        
        r2 = max(r2, i);
        c2 = max(c2, j);
        
        dfs(land, i+1, j, r2, c2 );
        dfs(land, i-1, j, r2, c2 );
        dfs(land, i, j+1, r2, c2 );
        dfs(land, i, j-1, r2, c2 );
        
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int row = land.size();
        int col = land[0].size();
        
        vector<vector<int>> ans;
        
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if(land[i][j] == 1) {
                    
                    int r2=-1, c2 = -1;
                    dfs(land, i, j, r2, c2);
                    ans.push_back({i,j,r2, c2});
                }
            }
        }
        
        return ans;
        
    }
};