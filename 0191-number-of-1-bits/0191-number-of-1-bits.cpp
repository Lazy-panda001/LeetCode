class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int count_ones=0;
        
        while(n > 0)
        {
            if(n & 1 > 0)
            {
                count_ones++;
            }
            
            n = n >> 1;
        }
        
        return count_ones;
        
    }
};