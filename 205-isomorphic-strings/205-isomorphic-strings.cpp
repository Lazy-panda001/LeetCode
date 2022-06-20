class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if(s.size() != t.size())
            return false;
        
        unordered_map<char,char> ump;
        set<char> st;
        
        for(int i=0; i<s.size(); i++)
        {
            if(ump.count(s[i]) == 0 and st.count(t[i]) ==0) // both elecome for the first time
            {
                ump[s[i]] = t[i];
                st.insert(t[i]);
            }
            
            else if(ump.count(s[i]) ==0 and st.count(t[i])!= 0)
            {
                return false;
            }
            
            else if(ump[s[i]] != t[i])
                return false;
        }
        return true;
        
    }
};