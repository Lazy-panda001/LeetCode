class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int> stk; // initially empty
        int j=0; // pointing to popped array
        
        for(int i=0; i<pushed.size(); i++)
        {
            stk.push(pushed[i]); 
            while(!stk.empty() and stk.top() == popped[j])
            {
                stk.pop();
                j++;
            }
        }
        
        if(j == popped.size())
        {
            return true;
        }
        return false;
        
        
    }
};