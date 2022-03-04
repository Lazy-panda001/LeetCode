class Solution {
public:
    int countOdds(int low, int high) 
    {
        int total_number = (high - low + 1);
        
        if(low % 2!= 0 and high % 2 != 0)
        {
            return total_number/2 + 1;
        }
        else
            return total_number/2;
            
        
    }
};