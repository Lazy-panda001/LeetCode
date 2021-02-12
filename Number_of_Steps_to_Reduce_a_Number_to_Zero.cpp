class Solution 
{
public:
    int numberOfSteps (int num) 
    {
        int count=0;
        while(num)
        {
            if(num % 2 == 0) // 14 
            {
                num = num / 2;
            }
            else
            {
                num = num -1;
            }
            
            count++;
        }
        return count;
    }
};
/********** Compelxity
TIME COMPLEXITY
O(logn)

SPACE COMPLEXITY
O(1)
***********/
