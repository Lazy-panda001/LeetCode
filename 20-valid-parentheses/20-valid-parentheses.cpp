class Solution {
public:
    bool isValid(string str) 
    {
        stack<char> stk;
        int n = str.size();
        
        if(n == 1)
        {
            return false;
        }
        
        for(int i=0; i<n; i++)
        {
            if(str[i] == '(' or str[i] == '{' or str[i] == '[')
            {
                stk.push(str[i]);
            }
            else if(str[i] ==')')
            {
                if(stk.size() == 0 or stk.top() != '(')
                {
                    return false;
                }
                else
                {
                    stk.pop();
                }
            }
           else if(str[i] =='}')
            {
                if(stk.size() == 0 or stk.top() != '{')
                {
                    return false;
                }
                else
                {
                    stk.pop();
                }
            }
            else if(str[i] ==']')
            {
                if(stk.size() == 0 or stk.top() != '[')
                {
                    return false;
                }
                else
                {
                    stk.pop();
                }
            }
        }
        
        if(stk.empty() == true)
        {
            return true;
        }
        return false;
        
    }
};