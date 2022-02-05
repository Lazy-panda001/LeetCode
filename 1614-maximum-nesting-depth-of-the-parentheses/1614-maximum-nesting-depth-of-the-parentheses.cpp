class Solution {
public:
    int maxDepth(string s) 
    {
        int n = s.size();
        if(n == 0)
            return 0;
        int max_depth = INT_MIN;
        
        int count = 0;
        
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                count++;
                max_depth = max(count, max_depth);
            }
            else if( s[i] == ')')
            {
                count--;
            }
        }
        if(max_depth == INT_MIN)
            return 0;
        return max_depth;
        
    }
};