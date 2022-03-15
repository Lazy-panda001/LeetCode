class Solution {
public:
    string minRemoveToMakeValid(string str) 
    {
        stack<int> stk;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '(')
            {
                stk.push(i);
            }
            
            else if(str[i] == ')')
            {
                if(stk.size() == 0)
                {
                    str[i] = '.';
                }
                else
                {
                    stk.pop();
                }
            }
        }
        
        while(stk.size() > 0)
        {
            str[stk.top()] = '.';
            stk.pop();
        }
        
        string res="";
        for(auto x : str)
        {
            if(x != '.')
            {
                res +=x;
            }
        }
        
        return res;
    }
    
    
    
};