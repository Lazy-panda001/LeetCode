class Solution {
public:
    long long smallestNumber(long long num) 
    {
        if(num == 0)
        {
            return 0;
        }
        
        vector<long long> digits;
        
        if(num < 0) // means negative value
        {
            num = num * (-1); // making as positive
            
            while(num > 0)
            {
                digits.push_back(num % 10);
                num = num / 10;
            }
            
            sort(digits.begin(), digits.end(), greater<int>());
            
            long long number = 0;
            
            for(int i=0; i<digits.size(); i++)
            {
                number = number*10 + digits[i];
            }
            
            return number*(-1);
            
        }
        else
        {
            while(num > 0)
            {
                digits.push_back(num % 10);
                num = num / 10;
            }
            
            sort(digits.begin(), digits.end());
            
            long long zeros = 0;
            
            int i=0;
            while(digits[i] == 0)
            {
                zeros++;
                i++;
            }
            
            long long number = digits[i];
            while(zeros--)
            {
                number = number*10 + 0; // all zeros will be added here after first non-zero-digit
            }
            
            for(int j=i+1; j<digits.size(); j++)
            {
                number = number*10 + digits[j];
            }
            
            return number;
        }
        
    }
};