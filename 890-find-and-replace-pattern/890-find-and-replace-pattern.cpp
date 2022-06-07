class Solution 
{
public:
    
    bool Is_match(string str1, string str2)
    {
        unordered_map<char , char> ump;
        vector<bool> vis(26,false);
        
        for(int i=0; i<str1.size(); i++)
        {
            char c1 = str1[i];
            char c2 = str2[i];
            
            if(ump[c1] and  ump[c1] != c2)
                return false;
            
            if(!ump[c1] and vis[c2-'a'] == true)
                return false;
            
            ump[c1] = c2;
            vis[c2-'a'] = true;
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> res;
        for(auto word : words)
        {
            if(Is_match(word, pattern) == true)
            {
                res.push_back(word);
            }
        }
        
        return res;
    }
};