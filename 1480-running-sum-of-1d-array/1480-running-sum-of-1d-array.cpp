class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int n = nums.size();
        
        vector<int> running_sum(n);
        
        running_sum[0] = nums[0];
        
        for(int i=1; i<n; i++)
        {
            running_sum[i] = running_sum[i-1] + nums[i];
        }
        return running_sum;
          
    }
};