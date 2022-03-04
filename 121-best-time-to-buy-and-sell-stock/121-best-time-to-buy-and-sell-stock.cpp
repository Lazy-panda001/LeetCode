class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int least_stock_price = INT_MAX; // initially
        
        int each_day_profit = 0; // each day ka profit calculate kiya
        
        int maximum_profit = 0;  // finally total profit calculate kiya
        
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i] < least_stock_price)
            {
                least_stock_price = prices[i];
            }
            
            each_day_profit = prices[i] - least_stock_price;
            
            maximum_profit = max(maximum_profit , each_day_profit);
        }
        
        return maximum_profit; 
    }
};