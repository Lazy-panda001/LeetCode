class Solution {
public:
    string decodeMessage(string key, string m) 
    {
        unordered_map<char,char> ump;
        
        char ch = 'a';
        for(int i=0; i<key.size(); i++)
        {
            if(key[i] != ' ' and ump[key[i]] == 0)
            {
                ump[key[i]] = ch;
                ch++;
            }
        }
        
        for(int i=0; i<m.size(); i++)
        {
            if(m[i] != ' ')
                m[i] = ump[m[i]];
        }
        return m;
        
    }
};