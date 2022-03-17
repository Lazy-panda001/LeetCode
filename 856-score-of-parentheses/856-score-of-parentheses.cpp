class Solution {
public:
    int scoreOfParentheses(string s) 
    {
        stack<int> stk;
        int answer=0;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                stk.push(answer);
                answer=0;
            }
            else
            {
                answer = stk.top() + max(2*answer,1);
                stk.pop();
            }
        }
        return answer;
    }
};