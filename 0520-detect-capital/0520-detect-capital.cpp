class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int count = 0;
        
        int n = word.size();
        
        for(int i=1; i<word.size(); i++)
        {
            if(word[i] >= 97)
            {
                count++;
            }
        }
        
      if(count+1 == n)
        {
            return true; // all small and 3rd condition
        }
        
        else if(count == 0 and word[0]>= 65 and word[0]<=90)
        {
            return true; // all capitals
        }
        
        else
            return false;
        
       
        
        
    }
};

