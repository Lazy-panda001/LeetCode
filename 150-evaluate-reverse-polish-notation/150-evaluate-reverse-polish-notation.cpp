class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> stk;
        
        for(auto t : tokens)
        {
            if( t == "+" or t == "-" or t == "*" or t =="/")
            {
                int num1 = stk.top(); stk.pop();
                int num2 = stk.top(); stk.pop();
                
                if(t=="+") stk.push(num1 + num2);
                if(t=="-") stk.push(num2 - num1);
                if(t=="*") stk.push(num1*num2);
                if(t== "/") stk.push(num2 / num1);        
            }
           else
               stk.push(stoi(t));
        }
        return stk.top();
        
    }
};