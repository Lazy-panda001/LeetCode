class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {
        vector<int> pairs;
        
        sort(potions.begin(), potions.end());
        
        for(int i=0; i<spells.size(); i++)
        {
            // Binary search
            
            int low = 0;
            int high = potions.size()-1;
            
            while(low <= high)
            {
                long long mid = low + (high - low)/2;
                
                if((long long int)(spells[i]) * (long long int)(potions[mid]) >= success)
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            
            pairs.push_back(potions.size() - high -1);
        }
        
        
        
        return pairs;
        
    }
};

