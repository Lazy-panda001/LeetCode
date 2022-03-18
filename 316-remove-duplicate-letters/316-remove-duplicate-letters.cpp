class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        unordered_map<char, int> lst_idx;
        
        for(int i=0; i<s.size(); i++)
        {
            lst_idx[s[i]] = i;
        }
        
        vector<bool> visited(26,false);
        
        string res="";
        
        for(int i=0; i<s.size(); i++)
        {
            if(visited[s[i] - 'a'] == true)
            {
                continue;
            }
            
            while(res.size()>0 and res.back() > s[i] and lst_idx[res.back()] > i)
            {
                visited[res.back() - 'a'] = false;
                res.pop_back();
            }
        
            res.push_back(s[i]);
            visited[s[i] - 'a'] = true;
        }
        return res;
    }
};