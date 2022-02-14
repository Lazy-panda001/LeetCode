class Solution {
public:
    int minSteps(string s, string t) 
    {
        vector<int> freq(26,0);
        
        for(int i=0; i<s.size(); i++)
        {
            freq[s[i]-'a']++;
        }
        
        int steps=0;
        
        for(int i=0; i<t.size(); i++)
        {
            // 0 hay
            if(freq[t[i] - 'a'] == 0)
            {
                steps++;
            }
            else if(freq[t[i] - 'a'] > 0)
            {
                freq[t[i]-'a']--;
            }
        }
        return steps;
    }
};