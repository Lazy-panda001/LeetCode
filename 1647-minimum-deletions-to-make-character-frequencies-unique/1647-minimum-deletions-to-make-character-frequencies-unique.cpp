class Solution {
public:
    int minDeletions(string s) 
    {
        /*
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
        */
        
        // total - keep = not keep
        
        vector<int>freq(26,0);
        for(int i=0; i<s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }
        
        sort(freq.begin(), freq.end(), greater<int>());
        
        int prev = INT_MAX;
        int keep=0;
        
        for(int i=0; i<26; i++)
        {
            int f = freq[i];
            
            if(f == 0 or prev == 0)
            {
                break;
            }
            
            prev = min(f, prev-1);
            
            keep +=prev;
        }
        return s.size() - keep;
    }
};