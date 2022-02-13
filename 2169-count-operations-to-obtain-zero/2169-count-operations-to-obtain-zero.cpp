class Solution {
public:
    int countOperations(int num1, int num2) 
    {
        if(num1 ==  0 or num2 ==0)
        {
            return 0;
        }
        
        int steps=0;
        while(num1 and num2)
        {
            if(num1 >= num2)
            {
                num1 = num1 - num2;
            }
            else 
            {
                num2 = num2 - num1;
            }
        steps++;
        }
        
        return steps;
        
    }
};