class Solution {
public:
    bool isValid(string str) 
    {
        stack<int> stk;
        
        int n = str.size();
        
        if(n == 1)
        {
            return false;
        }
        int i=0;
        for(; i<n; i++)
        {
            char ch = str[i];
            
            if(ch == '(' or ch == '{' or ch == '[')
            {
                stk.push(ch);
            }
            
            else if(ch == ')')
            {
                if(stk.size() == 0 or stk.top() != '(')
                    return false;
                else
                    stk.pop();
            }
            
            else if(ch == '}')
            {
                if(stk.size() == 0 or stk.top() != '{')
                    return false;
                else
                    stk.pop();
            }
            
            else if(ch == ']')
            {
                if(stk.size() == 0 or stk.top() != '[')
                    return false;
                else
                    stk.pop();
            }
        }
        
        if(stk.empty() == true)
            return true;
        return false;
    }
};