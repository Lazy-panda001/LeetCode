class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int n = word.size();
        if(n == 1)
        {
            return true;
        }
        
        // Case 1 : 1st letter is capital and all rest is small
        if((word[0] >='A' and word[0]<='Z') and(word[1]>='a' and word[1]<='z'))
        {
            for(int i=2; i<n; i++)
            {
                if(word[i]>='a' and word[i]<='z')
                {
                    continue;
                }
                else
                    return false;
            }
        }
        
        // Case 2 : 1st letter is small and rest all are also small
       else if((word[0] >='a' and word[0]<='z') and(word[1]>='a' and word[1]<='z'))
        {
            for(int i=2; i<n; i++)
            {
                if(word[i]>='a' and word[i]<='z')
                {
                    continue;
                }
                else
                    return false;
            }
        }
        
        // Case 3: 1st letter is caplital and rest all are also capital
       else if((word[0] >='A' and word[0]<='Z') and(word[1]>='A' and word[1]<='Z'))
        {
            for(int i=2; i<n; i++)
            {
                if(word[i]>='A' and word[i]<='Z')
                {
                    continue;
                }
                else
                    return false;
            }
        }
        
        else
            return false;
        return true;
        
        
        
    }
    
    
    
};