class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) 
    {
        int n = nums.size();
        
        if(n<3)
        {
            return 0;
        }
        
        int total_subarray=0;
        int prev_diff = nums[1] - nums[0], curr_diff=0;
        int total_count=0;
        
        for(int i=2; i<n; i++)
        {
            curr_diff = nums[i] - nums[i-1];
            if(curr_diff == prev_diff)
            {
                ++total_count;
            }
            
            else
            {
                prev_diff = curr_diff;
                total_count=0;
            }
            
            total_subarray += total_count;
            
        }
        
        
        return total_subarray;
    }
};