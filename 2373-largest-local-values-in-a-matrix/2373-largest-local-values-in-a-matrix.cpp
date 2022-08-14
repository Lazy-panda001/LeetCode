class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        vector<vector<int>> res(n-2, vector<int>(n-2));
        
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<res.size(); j++)
            {
                int largest = INT_MIN;
                
                for(int row = i; row<i+3; row++)
                {
                    for(int col=j; col<j+3; col++)
                    {
                        largest = max(largest , grid[row][col]);
                    }
                }
                
                res[i][j] = largest;
            }
        }
        
        return res;
    }
};