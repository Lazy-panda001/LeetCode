class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int wealth = INT_MIN;
        int row = accounts.size();
        int col = accounts[0].size();
        
        for(int i=0; i<row; i++)
        {
            int max_sum=0;
            for(int j=0; j<col; j++)
            {
                max_sum +=accounts[i][j];
            }
            wealth = max(wealth , max_sum);
        }
        
        
        return wealth;
    }
};