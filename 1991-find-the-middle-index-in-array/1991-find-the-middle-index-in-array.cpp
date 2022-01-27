class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
        int total_sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            total_sum+=nums[i];
        }
        
        int curr_sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(curr_sum == total_sum - nums[i])
            {
                return i;
            }
            curr_sum +=nums[i];
            total_sum = total_sum - nums[i];
        }
        return -1;
    }
};