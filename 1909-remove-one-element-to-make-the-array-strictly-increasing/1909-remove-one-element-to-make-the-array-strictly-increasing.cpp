class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) 
    {
        int count = 0;
        int index=0;
        
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1] >= nums[i])
            {
                count++;
                index = i;
            }
        }
        
        if(count > 1)
        {
            return false;
        }
        
        if(count == 0)
        {
            return true;
        }
        
        if(index == nums.size()-1 or index == 1)
        {
            return true;
        }
        
        if(nums[index-1] < nums[index+1] or nums[index -2] < nums[index])
        {
            return true;
        }
        return false;
    }
};