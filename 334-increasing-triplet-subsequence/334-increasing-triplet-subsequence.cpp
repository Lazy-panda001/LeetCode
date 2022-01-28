class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int low_value = INT_MAX;
        int mid_value = INT_MAX;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] > mid_value)
            {
                return true; // breaking condition
            }
            else if( nums[i] < low_value)
            {
                low_value = nums[i];
            }
            else if(nums[i] > low_value and nums[i] < mid_value)
            {
                mid_value = nums[i];
            }
        }
        
        return false;
        
    }
};