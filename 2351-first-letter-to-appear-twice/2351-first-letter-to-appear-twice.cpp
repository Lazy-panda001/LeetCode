class Solution {
public:
    char repeatedCharacter(string s) 
    {
        vector<int> freq(26,0);
        
        char ch;
        
        for(int i=0; i<s.size(); i++)
        {
            freq[s[i] - 'a']++;
            if(freq[s[i] - 'a'] ==2 )
            {
                return s[i];
            }
        }
         
        return 'a';
        
    }
};