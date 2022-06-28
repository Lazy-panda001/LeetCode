class Solution {
public:
    int minDeletions(string s) 
    {
        unordered_map<char,int> char_counts;
        
        for(auto ch : s)
        {
            char_counts[ch]++;
        }
        
        unordered_set<int> seen;
        
        int ans=0;
        
        for(auto [k,v] : char_counts)
        {
            if(seen.find(v) != seen.end())
            {
                while(seen.find(v) != seen.end())
                {
                    v--;
                    ans++;
                }
            }
            
            if(v>0)
            {
                seen.insert(v);
            }
        }
        
        return ans;
    }
};