class Solution 
{
public:
    int sum_digit_num(int num)
    {
        int sum = 0;
        while(num)
        {
            sum = sum + (num % 10) * (num % 10);
            num = num / 10;
        }
        return sum;
    }
    
    
    bool isHappy(int n) 
    {
        int slow = n; int fast = n;
        do
        {
            slow = sum_digit_num(slow);
            fast = sum_digit_num(sum_digit_num(fast));
        }while(slow != fast);
        
        return(slow == 1);
         
    }
};