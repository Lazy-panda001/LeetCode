class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int size = flowerbed.size();
 
        if(n == 0)
        {
            return true;
        }
        
        if(size == 1 and flowerbed[0] == 0 and n ==1)
        {
            return true;
        }
        
        int possible_positions =0;
        
        
        for(int i=0; i<size; i++)
        {
            if(flowerbed[i] == 0)
            {
                if(i == 0) // 1st index
                {
                    if(flowerbed[i+1] != 1)
                    {
                        flowerbed[i] = 1;
                        possible_positions++;
                    }
                }
                
    
                else if(i == size-1)
                {
                    if(flowerbed[i-1] != 1)
                    {
                        flowerbed[i] = 1;
                        possible_positions++;
                    }
                }
                
                else 
                {
                    if(flowerbed[i-1] != 1 and flowerbed[i+1] != 1)
                    {
                        flowerbed[i] = 1;
                        possible_positions++;     
                    }
                }
            }
            else
                continue;
        }
        
        cout<<possible_positions<<endl;
        
        if(possible_positions >= n)
        {
            return true;
        }
        return false;
        
    }
};