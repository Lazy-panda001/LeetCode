class Solution {
public: 
     unordered_set<int> find_primes(int val)
     {
         unordered_set<int> values;
         
         while(val % 2 == 0)
         {
             values.insert(2);
             val /=  2;
         }
         
         for(int i = 3; i*i <= val; i += 2)
         {
             while(val % i == 0)
             {
                 values.insert(i);
                 val /= i;
             }
         }
         
         if(val > 2)
         {
             values.insert(val);
         }
         
         return values;
     }
    
    int distinctPrimeFactors(vector<int>& nums) 
    {
        unordered_set<int> prime_factors;
        
        for(auto val : nums)
        {
            unordered_set<int> current_factors = find_primes(val);
            
            prime_factors.insert(current_factors.begin(), current_factors.end());
        }
        
        return prime_factors.size();
        
    }
};