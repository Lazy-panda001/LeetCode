class Solution {
public:
    int maxScore(vector<int>& nums, int k) 
    {
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum +=nums[i];
        }
        
        int n = nums.size();
        
        if(n == k)
            return sum;
        int size = n - k;
        
        int j=0, min_sum = INT_MAX, curr_sum=0;
        
        
        for(int i=0; i<n; i++)
        {
            curr_sum +=nums[i];
            
            if(i>=size-1) // as array is 0 indexing
            {
                min_sum = min(min_sum, curr_sum);
                curr_sum -=nums[j];
                j++;
            }
        }
        
        return sum - min_sum;
    }
};