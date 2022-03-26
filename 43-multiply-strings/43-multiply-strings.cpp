class Solution {
public:
  
    string multiply(string num1, string num2) 
    {
     if(num1 == "0" or num2 == "0") // if anyone is zero
     {
         return "0";
     }
        
    vector<long long>res(num1.size() + num2.size(), 0);
        
        for(int i=num1.size()-1; i>=0; i--)
        {
            for(int j=num2.size()-1; j>=0; j--)
            {
                int pair_multiply = (num1[i] - '0') * (num2[j] -'0');
                int sum_with_carry  = pair_multiply + res[i+j+1];
                
                res[i+j+1] = sum_with_carry % 10; // unit digit of number
                res[i+j]  += sum_with_carry / 10; //  10's digit of number
            }
        }
        
        string ans ="";
        int k=0;
        while(k < res.size() and res[k] ==0) k++;
        while( k < res.size())
        {
            ans += to_string(res[k]);
            k++;
        }
        return ans;
        
    }
};