class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int>row_wise(row+1,0);
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                row_wise[matrix[i][j]]++;
                if(row_wise[matrix[i][j]] > i+1)
                {
                    return false;
                }
            }
        }
        
        vector<int>col_wise(col+1,0);
        
        for(int i=0; i<col; i++) // column first
        {
            for(int j=0; j<row; j++)  // row second
            {
                col_wise[matrix[j][i]]++;  // [row][col] -->coordinate
                
                if(  col_wise[matrix[j][i]] > i+1)
                {
                    return false;
                }
            }
        }
        
        return true;
        
        
    }
};