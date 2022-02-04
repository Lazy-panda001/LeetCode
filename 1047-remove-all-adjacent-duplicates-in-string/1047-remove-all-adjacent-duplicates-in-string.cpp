class Solution {
public:
    string removeDuplicates(string str) 
    {
        string res;
        for(int i=0; i<str.size(); i++)
        {
            if(res.empty() or res.back() != str[i])
            {
                res.push_back(str[i]);
            }
            else if(str[i] == res.back())
            {
                res.pop_back();
            }
        }
        return res;
        
    }
};