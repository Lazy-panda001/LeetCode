class Solution {
public:
    int countAsterisks(string s) 
    {
        int vertical_bar = 0;
        int ast=0;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '|')
            {
                vertical_bar++;
            }
            
            if(vertical_bar % 2 == 0 and s[i] == '*')
            {
                ast++;
            }
        }
        
        return ast;
        
    }
};