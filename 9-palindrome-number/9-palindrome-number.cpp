class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
        {
            return false;
        }
        
        long long value=x;
        long long num = 0;
        while(x >0)
        {
            int rem = x  % 10;
            num = num*10 + rem;
            x = x/10;
        }
       if(value == num)
           
            return true;
        else
            return false;
    }
};