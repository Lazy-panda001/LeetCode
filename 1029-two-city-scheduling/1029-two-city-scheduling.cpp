class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        vector<int> extra;
        int n = costs.size()/2;
        
        int min_cost = 0;
        
        for(auto it : costs)
        {
            min_cost += it[0];
            extra.push_back(it[1] - it[0]);
        }
        
        
        sort(extra.begin(), extra.end());
        
        for(int i=0; i<n; i++)
        {
            min_cost += extra[i];
        }
        return min_cost;
        
    }
};