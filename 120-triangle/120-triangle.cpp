class Solution 
{
public:
    
    int find_path(vector<vector<int>> &triangle , int row , int idx , vector<vector<int>> &dp)
    {
        if(row == triangle.size())
            return 0;
        // look up table
        if(dp[row][idx] != -1)
            return dp[row][idx];
        
        else
           return dp[row][idx] = triangle[row][idx] + min(find_path(triangle , row+1, idx, dp),find_path(triangle,row+1, idx+1, dp));
    }
    
    
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int row = 0;
        int idx = 0;
        
        int size = triangle.size();
        vector<vector<int>> dp (size,vector<int>(size,-1));
        
        return find_path(triangle , row , idx , dp );
        
    }
};