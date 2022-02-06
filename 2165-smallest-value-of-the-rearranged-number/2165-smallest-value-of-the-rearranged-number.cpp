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
            string str = to_string(num);
            sort(str.begin()+1 , str.end(), greater<int>());
            return stoll(str);
            
        }
        else
        {
            while(num > 0)
            {
                digits.push_back(num % 10);
                num = num / 10;
            }
            
            sort(digits.begin(), digits.end());  // sort in increasing order
            
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
                number = number*10 + digits[j];  // now all non-zeros will be added
            }
            
            return number;
        }
        
    }
};