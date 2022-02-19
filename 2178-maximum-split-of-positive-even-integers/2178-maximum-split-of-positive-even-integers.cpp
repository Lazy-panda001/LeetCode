class Solution {
public:
    vector<long long> maximumEvenSplit(long long num) 
    {
        vector<long long> res;
        if(num % 2 != 0) // means if odd
        {
            return res;
        }
        
        long long i=2;
        long long curr_sum = 0;
        
        while(curr_sum + i <= num)
        {
            res.push_back(i);
            curr_sum +=i;
            i = i+2;
        }
        
        if(curr_sum == num)
        {
            return res;
        }
       else
       {
           long long diff = num - curr_sum;
           int n = res.size();
           res[n-1] = res[n-1] + diff;
           return res;
       }
    }
};