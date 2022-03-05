class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        vector<vector<int>> res(r,vector<int>(c));
        
        int row = mat.size(); int col = mat[0].size();
        
        if(row*col != r*c)
        {
            return mat;
        }
        
        for(int i=0; i<r*c; i++)
        {
            res[i/c][i%c] = mat[i/col][i%col];
        }
        
        return res;
        
    }
};