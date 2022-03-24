class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        
        // top right cell ka low and high le le
        int low = 0 , high = col-1;
        
        while(low < row and high >=0)
        {
            if(matrix[low][high] == target)
            {
                return true;
            }
            else if(matrix[low][high] < target)
                low++;
            else // >
                high--;
        }
        
        return false;
        
    }
};