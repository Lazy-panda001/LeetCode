class Solution {
public:
    int lengthOfLongestSubstring(string str) 
    {
        int n = str.size();
        if(n == 0)
            return 0;
        
        set<char> st;
        
        int i=0, j=0, maxsize=0;
        
        while(i<n and j<n)
        {
            if(st.count(str[j]) == 0)
            {
                st.insert(str[j]);
                maxsize = max(maxsize, (int)st.size());
                j++;
            }
            else
            {
                st.erase(str[i]);
                i++;
            }
        }
        
        return maxsize;
    }
};