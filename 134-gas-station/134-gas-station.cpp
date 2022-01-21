class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int total_gas = 0;
        int total_cost = 0;
        for(int i=0; i<gas.size(); i++)
        {
            total_gas +=gas[i];
            total_cost +=cost[i];
        }
        
        if(total_gas < total_cost)
        {
            return -1;
        }
        
        vector<int> diff(gas.size());
        for(int i=0; i<gas.size();i++)
        {
            diff[i] = gas[i] - cost[i];
        }
        
        vector<int>pf_sum(gas.size());
        
        pf_sum[0] = diff[0];
        
        for(int i=1; i<gas.size(); i++)
        {
            pf_sum[i] = pf_sum[i-1] + diff[i];
        }
        
        int min_val = INT_MAX;
        int index=0;
        for(int i=0; i<pf_sum.size(); i++)
        {
            if(pf_sum[i] <min_val)
            {
                min_val = pf_sum[i];
                index = i;
            }
        }
        return (index+1) % gas.size();
    }
};