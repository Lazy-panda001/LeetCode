class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count_pairs=0;
        int slow=0;
        int fast=1;
        
        while(slow < n and fast < n)
        {
            if(abs(nums[slow] - nums[fast]) == k)
            {
                count_pairs++;
                slow++;
                fast++;
                
                // But if there is some repetition
                while(fast < n and nums[fast] == nums[fast-1])
                {
                    fast++;
                }
            }
            
            else if(abs(nums[slow] - nums[fast]) < k)
            {
                fast++;
            }
            else if(abs(nums[slow] - nums[fast]) > k)
            {
                slow++;
                
                if(fast - slow == 0)
                {
                    fast++;
                }
            }
        }
        
        return count_pairs;
        
    }
};