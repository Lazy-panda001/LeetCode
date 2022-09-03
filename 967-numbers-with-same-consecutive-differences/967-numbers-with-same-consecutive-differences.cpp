class Solution {
public:
    vector<int> res;
    
    void func(int len, int &k, int num, int digit)
    {
        if(len == 0)
        {
            res.push_back(num);
            return;
        }
        
        for(int i=0; i<10; i++)
        {
            if(abs(i - digit) == k)
            {
                func(len-1, k, num*10 + i, i);
            }
        }
        return;
    }
        
    
    vector<int> numsSameConsecDiff(int n, int k) 
    {
        for(int i=1; i<=9; i++)
        {
            func(n-1, k, i, i);
        }
        
        return res;
        
    }
};