class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
        int total_sum = 0;
        for(auto val : nums)
        {
            total_sum +=val;
        }
        
        int target_sum = total_sum - x;
        int curr_sum = 0;
        
        int start_idx = 0;
        
        int min_opr = INT_MIN;
        
        // Sliding Window Technique
        for(int end_idx = 0; end_idx < nums.size(); end_idx++)
        {
            curr_sum +=nums[end_idx]; // step 1  --> formal operation
             
            while(start_idx <= end_idx and curr_sum > target_sum)  // step 2 --> negative chance
            {
                curr_sum -= nums[start_idx];
                start_idx++;
            }
            
            if(curr_sum == target_sum)
            {
                min_opr = max(min_opr , end_idx - start_idx + 1);
            }
        }
        
        if(min_opr == INT_MIN)
            return -1;
        return nums.size() - min_opr;
        
    }
};