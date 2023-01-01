class Solution {
public:
    bool wordPattern(string pattern, string str) 
    {
        int n = str.size();
        
        string temp = "";
        vector<string> res;
        
        int i = 0;
        while(i < n)
        {
            if(str[i] == ' ')
            {
                res.push_back(temp);
                temp="";
            }
            else
            {
                temp +=str[i];
            }
        i++;
        }
        
        res.push_back(temp);
        
        if(res.size() != pattern.size())
        {
            return false;
        }
        
        unordered_map<char, string> ump;
        set<string> st;
        
        for(int i=0; i<res.size(); i++)
        {
            if(ump.count(pattern[i]) == 0 and st.count(res[i]) == 0) // 1:1 mapping
            {
                ump[pattern[i]] = res[i];
                st.insert(res[i]);
            }
            else if(ump.count(pattern[i]) != 0 and st.count(res[i]) == 0)
            {
                return false;
            }
            
            else if(ump.count(pattern[i]) == 0 and st.count(res[i]) != 0)
            {
                return false;
                        
            }
            else if(ump[pattern[i]] != res[i])
            {
                return false;
            }
        }
                    
        return true;
        
           
    }
};