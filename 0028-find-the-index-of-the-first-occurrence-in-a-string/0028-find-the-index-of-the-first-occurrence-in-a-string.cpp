class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int n = needle.size();
        
        for(int i=0; i<haystack.size(); i++)
        {
            string str = haystack.substr(i,n);
            
            if(str == needle)
            {
                return i;
            }
        }
        return -1;
        
    }
};