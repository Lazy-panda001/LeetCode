class Solution {
public:
    int minimumCardPickup(vector<int>& cards) 
    {
        int n = cards.size();
        
        if(n == 0)
            return 0;
        
        int prev_index=0;
        
        unordered_map<int,int> ump;
        
        int ans = INT_MAX;
        
        for(int i = 0; i<n; i++)
        {
            if(ump.find(cards[i]) != ump.end())
            {
                int diff = i - ump[cards[i]] + 1;
                cout<<diff<<endl;
                ans = min(ans,diff);    
            }
            
            ump[cards[i]] = i;
        }
        
        if(ans == INT_MAX)
            return -1;
        return ans;
        
    }
};