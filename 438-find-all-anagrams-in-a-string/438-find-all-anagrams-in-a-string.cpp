class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> res; // for storing all indices
        
        int n1 = s.size();
        int n2 = p.size();
        
        if(n1 < n2)
        {
            return res;
        }
        
        vector<int>freq_p(26,0);
        vector<int>freq_s(26,0);
        
        for(int i=0; i<n2; i++)
        {
            freq_p[p[i] - 'a']++;
            freq_s[s[i] - 'a']++;
        }
        
        if(freq_p == freq_s)
        {
            res.push_back(0); // first index itselt is a anagram starting index
        }
        
        int i=0;
        int j=n2;
        
        while(j < n1)
        {
            freq_s[s[i] - 'a']--;
            freq_s[s[j] - 'a']++;
            i++;
            j++;
            
            if(freq_s == freq_p)
            {
                res.push_back(i);
            }
        }
        
        return res;
    
        
    }
};