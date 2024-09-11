class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num = start xor goal;
        
        int flips = 0;
        
        while(num > 0)
        {
            if(num & 1 > 0)
            {
                flips++;
            }
            
            num = num >> 1;
        }
        
        return flips;
    }
};