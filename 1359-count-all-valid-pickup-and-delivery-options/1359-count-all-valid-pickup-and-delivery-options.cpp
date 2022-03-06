class Solution {
public:
    int countOrders(int n) 
    {
        long res = 1;
        long mod = 1000000007;
        
        if(n == 1)
        {
            return 1;
        }
        
        for(int i=2; i<=n; i++)
        {
            // first find factoria;
            res = (res * i) % mod;
            
            // then value
            res = res * (2*i-1);
            
            res = res % mod;
        }
        
        return res % mod;
        
    }
};