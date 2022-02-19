class Solution {
public:
    vector<long long> sumOfThree(long long num) 
    {
        vector<long long> res;
        
        if((num % 3) == 0)
        {
            long long val = (long long)(num / 3);
            res.push_back(val-1);
            res.push_back(val);
            res.push_back(val+1);
            return res;
        }
       
        return res;
        
    }
};