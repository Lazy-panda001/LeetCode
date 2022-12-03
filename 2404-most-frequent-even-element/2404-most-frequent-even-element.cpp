class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        unordered_map<int,int> ump;
        
        for(auto val : nums)
        {
           if(val % 2 == 0)
           {
               ump[val]++;
           }
        }
        
        int most_freq = INT_MIN;
        
        int ans = -1;
        
        for(auto it : ump)
        {
            if(it.second > most_freq)
            {
                ans = it.first;
                most_freq = it.second;
            }
            
            else if(it.second == most_freq)
            {
                ans = min(it.first, ans);
            }
        }
        
        return ans;
        
            
    }
};