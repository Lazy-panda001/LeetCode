class Solution {
public:
    int secondHighest(string s) 
    {
       set<int> st;
        
        for(int i=0; i<s.size(); i++)
        {
            if(isdigit(s[i]))
            {
                st.insert(s[i]-'0');
            }
        }
        
        if(st.size()<2)
            return -1;
        
       auto rit = st.rbegin();
        return *(++rit);
        
        
    }
};