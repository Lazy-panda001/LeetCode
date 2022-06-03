class NumMatrix 
{
public:
    vector<vector<int>> prefix_sum_matrix;
    
    NumMatrix(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        
        // presum of each row
        for(int i=0; i<row; i++)
        {
            for(int j=1; j<col; j++)
            {
                matrix[i][j] += matrix[i][j-1];
            }
        }
        
        // prefix sum of each column
        for(int i=1; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                matrix[i][j] += matrix[i-1][j];
            }
        }
        
        // copied into new matrix
        prefix_sum_matrix = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) 
    {
        int total_sum = prefix_sum_matrix[row2][col2];
        
        
        int extra_sum =
            
        // check condition for negative cell
        ((col1==0) ? 0 : prefix_sum_matrix[row2][col1-1]) + 
        ((row1==0)? 0 :  prefix_sum_matrix[row1-1][col2]) -                                         ((row1!=0 and col1 !=0) ? prefix_sum_matrix[row1-1][col1-1] : 0 );
       
        
        
        return total_sum - extra_sum;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */