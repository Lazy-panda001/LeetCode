class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> res(n+1);
        
        res[0] = 0; // for zero answer will be 0;
        
        for(int i=1; i<=n; i++)
        {
            int count_1 =0;
            int num = i;
            
            while(num !=0)
            {
                count_1 += num % 2;
                num = num /2;
            }
            res[i] = count_1;
        }
        return res;
        
    }
};