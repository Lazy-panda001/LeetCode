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
        
        int start_pos=0;
        int right_now_gas = 0;
        for(int i=0; i<gas.size(); i++)
        {
            right_now_gas +=gas[i];
            right_now_gas -=cost[i];
            
            if(right_now_gas < 0)
            {
                start_pos = i+1;
                right_now_gas=0;
            }
        }
        
        return (start_pos) % gas.size();
    }
};