class Solution {
public:  
    int arraySign(vector<int>& nums) 
    {
        long long product = 1;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] < 0)
            {
                nums[i] = -1;
            }
            else if(nums[i] > 0)
            {
                nums[i] = 1;
            }
            else
            {
                nums[i] = 0;
            }
        }
        
        
        for(auto val : nums)
        {
            product = product*val;
        }
        
        if(product > 0 )
        {
            return 1;
        }
        else if(product < 0 )
        {
            return -1;
        }
        else 
        {
            return 0;
        }
            
    }
};