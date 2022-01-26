class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int total_sum = 0;
        for(auto it : nums)
        {
            total_sum +=it;
        }
        
        int curr_sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(curr_sum == total_sum - nums[i])
            {
                return i;
            }
            
            curr_sum +=nums[i];
            total_sum -= nums[i];
        }
        
        return -1;
        
    }
};