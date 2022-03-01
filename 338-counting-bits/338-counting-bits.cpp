class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> res(n+1);
        
        res[0] = 0;
        
        for(int i=1; i<=n; i++)
        {
            int sum=0;
            int num = i;
            
            while(num !=0)
            {
                sum += num % 2;
                num = num /2;
            }
            res[i] = sum;
        }
        return res;
        
    }
};