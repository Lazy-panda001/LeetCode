class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int low = 0;
        int high = col - 1;
        
        while(low < row and high >= 0 )
        {
            if(matrix[low][high] > target)
            {
                high--;
            }
            else if(matrix[low][high] < target)
            {
                low++;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};