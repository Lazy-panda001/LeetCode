class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        // 1. sort the array so that cheapest value will come first and can take that one
        // Because we need maximum ice bars
        
        int bars = 0;
        
        sort(costs.begin(), costs.end());
        
        int n = costs.size();
        
        for(int i=0; i<n; i++)
        {
            if(costs[i] <= coins)
            {
                coins -=costs[i];
                bars++;
            }
            else
            {
                return bars;
            }
        }
        
        return n;
        
    }
};