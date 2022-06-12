class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) 
    {
        int n = nums.size();
        
        int i=0;
        long long curr_sum = 0;
        long long count = 0;
        for(int j=0 ;j<n; j++)
        {
            curr_sum +=nums[j];
            
            while((long long)curr_sum*(j-i+1) >= k)
            {
                curr_sum = curr_sum - nums[i];
                i++;
            }
            
            count +=(j-i+1);
            
        }
        
        return count;
        
    }
};