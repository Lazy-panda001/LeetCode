class Solution {
public:
    // TC : O(n/2)
    int hammingWeight(uint32_t n) 
    {
    /*    int count=0;
        
        while(n>0)
        {
            n = n & (n-1);
            count++;
        }
        
        return count;*/
       
    // O(n)
        int count =0;
        while(n>0)
        {
            if(n & 1 > 0) // LSB ko check karega, if greater than 0, means 1 hay LSB
                count++;
            n = n/2;
        }
        return count;
    }
};