class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int wealth = INT_MIN;
        
        int row = accounts.size();
        
        int col = accounts[0].size();
        
        for(int i=0; i<row; i++)  // pointing each row
        {
            int richest_customer_wealth = 0;
            
            for(int j=0; j<col; j++)  // for each row --> add all column value
            {
                richest_customer_wealth +=accounts[i][j];
            }
            
            wealth = max(wealth , richest_customer_wealth);  // compare for maximum wealth
        }
        return wealth;
    }
};