class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        
        int i= s.size()-1;
        int j=0;
        int len = 0;
        
        while(i>=0)
        {
            while(i>=0 and s[i] ==' ')
            {
                i--;
            }
            if(i<0)
            {
                return 0;
            }
            
            j = i-1;
            
            while(j>=0 and s[j] !=' ')
            {
                j--;
            }
            break;
        }
        
        len = i-j;
        
        return len;
        
    }
};