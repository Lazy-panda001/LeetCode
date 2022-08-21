class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int end = 0 , start =0, ans = INT_MAX;
        
        int white_c=0;
        
        while(end < blocks.size())
        {
            if(blocks[end] == 'W')
            {
                white_c++;
            }
            
            if(end - start + 1 >=k)
            {
                ans = min(white_c, ans);
                
                if(blocks[start] == 'W')
                {
                    white_c--;
                }
                start++;     
            }
            
        end++;
        }
        
        return ans;
        
    }
};