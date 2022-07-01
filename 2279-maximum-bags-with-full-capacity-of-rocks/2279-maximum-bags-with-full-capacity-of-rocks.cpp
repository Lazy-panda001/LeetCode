class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) 
    {
        int n = capacity.size();
        
        for(int i=0; i<n; i++)
        {
            capacity[i] = capacity[i] - rocks[i];
        }
        
        sort(capacity.begin(), capacity.end());
        
        int full_capacity = 0;
        
        for(int i=0; i<n; i++)
        {
            if(capacity[i] == 0) // pagle se hi full capacity me hay
            {
                full_capacity++;
            }
            else if(capacity[i] <= additionalRocks)
            {
                additionalRocks = additionalRocks - capacity[i];
                full_capacity++;
            }
        }
        
        return full_capacity;
        
    }
};