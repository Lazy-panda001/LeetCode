class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int count=0;
        int n = word.size();
        for(int i=1; i<n; i++)
        {
            if(word[i]>=97)
            {
                count++;
            }
        }
        
        if(count == n-1) // all small will count
        {
            return true;
        }
        else if(count == 0 and word[0] >=65 and word[0] <= 90)
        {
            return true;
        }
        return false;
            
        
    }
};