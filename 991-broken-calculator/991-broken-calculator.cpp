class Solution {
public:
    int brokenCalc(int startValue, int target) 
    {
        // main fanda --> u have to come from Traget to start_value
        
        if(startValue >= target)
        {
            return startValue - target;
        }
        
        int count = 0;
        while(target > startValue)
        {
            if(target % 2 == 0)
            {
                target /=2;
            }
            else // odd
            {
                target +=1;
            }
            count++;
        }
        
        return count + startValue - target;
        
    }
};