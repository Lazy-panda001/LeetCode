class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int n = plants.size();
        
        int steps= 0;
        int used = capacity;
        
        for(int i=0; i<n; i++)
        {
            if(plants[i] <= used)
            {
                used = used - plants[i];
                steps++;
            }
            else
            {
                int index_distance = i - (-1);
                steps += index_distance + (index_distance-1);
                
                used = capacity; // refill the watering can
                
                used = used - plants[i];
                index_distance = 0;
            }
        }
        
        return steps;
        
        
        
    }
};