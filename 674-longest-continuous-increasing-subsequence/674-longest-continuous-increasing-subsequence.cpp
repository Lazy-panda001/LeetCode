class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        int len=1;
        int max_len = INT_MIN;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] >= nums[i+1])
            {
                len=1;
            }
            else
            {
                len++;
                max_len = max(max_len , len);
            }
        }
        if(max_len == INT_MIN)
            return 1;
        else
            return max_len;
        
    }
};