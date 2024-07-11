class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<int> stk;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                stk.push(i);
            }
            else if(s[i] == ')')
            {
                reverse(s.begin()+stk.top() +1, s.begin()+i);
                stk.pop();
            }
        }
        
        string str="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != '(' and s[i] != ')')
            {
                str+=(s[i]);
            }
        }
        
        return str;
    }
};