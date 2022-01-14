class Solution {
public:
    int myAtoi(string str) 
    {
        if(str.size() == 0)
        {
            return 0;
        }
        
        int i=0;
        
        while(str[i] ==' ' and i<str.size())
        {
            i++;
        }
        
        if(i == str.size())
        {
            return 0;
        }
        
        int sign = 1;
        if(str[i] == '-' or str[i] == '+')
        {
            if(str[i] == '-')
            {
                sign = -1;
            }
            i++;
        }
        
        unsigned long value = 0;
        
        for(; str[i] >= 48 and str[i]<= 57 and i < str.size(); i++)
        {
            value = value*10 + (str[i] - '0');
            
            if(value > INT_MAX)
            {
                if(sign == -1)
                    return INT_MIN;
                else
                    return INT_MAX;
            }   
        }
        return sign*value;
        
    }
};