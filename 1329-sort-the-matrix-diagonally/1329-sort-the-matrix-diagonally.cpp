class Solution {
public:
    
    void diag(vector<vector<int>>& mat, int row, int col)
    {
        vector<int> values;
        
        int r = row, c = col;
        
        while(r < mat.size() and c < mat[0].size())
        {
            values.push_back(mat[r++][c++]);
        }
        
        sort(values.begin(), values.end());
        
        int i=0;
        while(row < mat.size() and col < mat[0].size())
        {
            mat[row++][col++] = values[i++];
        }
    }
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        int n = mat[0].size();
        
        // traverse diagonals of the matrix which all are start from row 0
        
        for(int col =0; col <n; col++)
        {
            diag(mat, 0, col);
        }
        
        for(int row=1; row<m; row++)
        {
            diag(mat , row,0);
        }
        return mat;
        
    }
};