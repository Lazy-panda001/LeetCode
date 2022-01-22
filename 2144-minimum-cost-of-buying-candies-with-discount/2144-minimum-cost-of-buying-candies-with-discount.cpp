class Solution {
public:
    int minimumCost(vector<int>& cost) 
    {
        sort(cost.begin() , cost.end());
        
        int n = cost.size();
        
       int minimum_cost = 0;
        
        for(int i=0; i<n; i++)
        {
            if(i % 3 != n % 3)
            {
                minimum_cost+=cost[i];
            }
        
        }
        
        return minimum_cost;
        
    }
};