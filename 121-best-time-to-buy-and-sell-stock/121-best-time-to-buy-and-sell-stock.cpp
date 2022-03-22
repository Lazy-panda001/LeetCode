class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int least_profit = INT_MAX;
        int each_day_profit = 0;
        int max_profit = 0;
        
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i] < least_profit)
            {
                least_profit = prices[i];
            }
            
            each_day_profit = prices[i] - least_profit;
            max_profit = max(max_profit , each_day_profit);
        }
        
        return max_profit;
        
    }
};