class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        string str = s+s;
        string new_string = str.substr(1,str.size()-2);
        
        if(new_string.find(s) != -1)
            return true;
        return false;
        
        
    }
};