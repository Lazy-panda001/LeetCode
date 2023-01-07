class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        // find total_gas and total_cost.
        int total_gas = 0, total_cost = 0;
        
        for(int i=0; i<gas.size(); i++)
        {
            total_gas +=gas[i];
            total_cost +=cost[i];
        }
        
        if(total_gas < total_cost)
        {
            return -1;
        }
        
        int start_station = 0;
        int current_gas = 0;
        
        for(int i=0; i<gas.size(); i++)
        {
            current_gas += gas[i] - cost[i];
            
            if(current_gas < 0)
            {
                start_station = i+1;
                current_gas = 0;
            }
        }
        
        return start_station;
        
    }
};