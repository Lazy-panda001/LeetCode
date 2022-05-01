class Solution {
public:
    
    string check(string str)
    {
        stack<int> stk;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] != '#')
            {
                stk.push(str[i]);
            }
            else if(str[i] == '#')
            {
                if(stk.size() != 0)
                {
                    stk.pop();
                }
            }
        }
        
        string res="";
        while(!stk.empty())
        {
            res.push_back(stk.top());
            stk.pop();
        }
        return res;
    }
    
    bool backspaceCompare(string s, string t) 
    {
        return check(s) == check(t);        
    }
};