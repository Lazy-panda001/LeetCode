class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        
// ***************        TC -- > O(n2)
//         int low = 0;
//         int high = col - 1;
        
//         while(low < row and high >= 0 )
//         {
//             if(matrix[low][high] > target)
//             {
//                 high--;
//             }
//             else if(matrix[low][high] < target)
//             {
//                 low++;
//             }
//             else
//             {
//                 return true;
//             }
//         }
//         return false;
        
        int start = 0;
        int end = row*col - 1;
        
        while(start <=end) {
            int mid = start + (end - start) / 2;
            
            if(matrix[mid/col][mid%col] > target) {
                end = mid-1;
            } else if(matrix[mid/col][mid%col] < target) {
                start = mid + 1;
            } else
                return true;
        }
        return false;
        
    }
};