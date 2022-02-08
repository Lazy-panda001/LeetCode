class Solution {
public:
    int addDigits(int num) 
    {
        int sum = 0;
        
        while(1)
        {
            while(num >0)
            {
                int rem = num % 10;
                sum +=rem;
                num = num / 10;
            }
            
            if( sum < 10) // we got single digit
            {
                return sum;
            }
            else
            {
                num = sum;
                sum = 0;
            }
        }
        
        return sum;
        
    }
};