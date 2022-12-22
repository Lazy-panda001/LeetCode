class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int increases = 0;
        int decreases = 0;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] <= nums[i+1])
            {
                increases++;
            }
            
            if(nums[i] >= nums[i+1])
            {
                decreases++;
            }
        }
        
        if((increases+1 == nums.size()) or (decreases+1 == nums.size()))
        {
            return true;
        }
        return false;
        
    }
};