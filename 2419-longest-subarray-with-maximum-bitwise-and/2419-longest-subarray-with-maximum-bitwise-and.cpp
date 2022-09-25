class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int max_val = *max_element(nums.begin(), nums.end());
        
        int ans = 1;
        int n = nums.size();
        int i=0;
        
        while(i < n)
        {
            if(nums[i] == max_val)
            {
                int count = 0;
                int j = i;
                while(j < n and nums[j] == max_val)
                {
                    count++;
                    j++;
                }
                
                ans = max(ans,count);
                i = j;
            }
            else
            {
                i++;            }
        }
        return ans;
        
    }
};