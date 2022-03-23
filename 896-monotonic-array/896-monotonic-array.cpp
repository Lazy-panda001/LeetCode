class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        // 1. make 2 value increase and decrease as 0;
        // count increase and decrease , if any of the this o=is equal to nums.size() -1 means true else false
        
        int increase = 0;
        int decrease = 0;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] <= nums[i+1])
                increase++;
            if(nums[i] >= nums[i+1])
                decrease++;
        }
        
        if(increase+1 == nums.size() or decrease+1 == nums.size())
            return true;
        return false;
    }
};