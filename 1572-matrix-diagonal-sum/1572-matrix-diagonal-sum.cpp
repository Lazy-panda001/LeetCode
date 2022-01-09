class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int sum = 0;
        int row = mat.size();
        int col = mat[0].size();
        
        if( row == 1)
        {
            return mat[0][0];
        }
        
      /*  for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i == j or i+j == row-1)
                {
                    sum += mat[i][j];
                }
            }
        }*/
        
        for(int i=0; i<row; i++)
        {
            sum +=mat[i][i] + mat[i][row -1-i];
        }
        cout<<sum<<endl;
        if(row % 2 == 1)
        {
            sum = sum - mat[row/2][row/2];
        }
        
        return sum;
    }
};