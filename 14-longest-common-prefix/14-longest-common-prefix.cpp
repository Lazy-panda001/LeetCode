class Solution {
public:
    
    string check_prefix(string str1 , string str2)
    {
        int i=0, j=0;
        string res ="";
        
        while(i < str1.size() and j<str2.size())
        {
            if(str1[i] == str2[j])
            {
                res +=str1[i];
                i++;j++;
            }
            else
            {
                break;
            }
        }
        
        return res;
    }
    
    string longestCommonPrefix(vector<string>& strs) 
    {
        string  prefix =strs[0];
        
        for(int i=1; i<strs.size(); i++)
        {
            prefix = check_prefix(prefix , strs[i]);
        }
        
        return prefix;
        
    }
};