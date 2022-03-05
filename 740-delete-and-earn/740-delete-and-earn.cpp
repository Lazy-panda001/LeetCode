class Solution {
public:
    int deleteAndEarn(vector<int>& nums) 
    {
       int inc = 0;
        int exc = 0;
        vector<int> freq(10001,0);
        
        for(auto it : nums)
        {
            freq[it]++;
        }
        
        for(int i=0; i<=10000;i++)
        {
            int ni = exc + freq[i]*i;
            
            int ne = max(inc,exc);
            
            inc = ni;
            exc = ne;
        }
        
        return max(inc,exc);
    }
};