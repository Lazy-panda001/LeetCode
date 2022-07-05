class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        if(n <=1)
        {
            return n;
        }
        
        int diff = nums[1] - nums[0];
        int len = 1;
        int max_length = INT_MIN;
        for(int i=1; i<n; i++)
        {
            if(nums[i] == nums[i-1])
            {
                continue;
            }
            
            else if(nums[i] - nums[i-1] == 1)
            {
                len++;
            }
            
            else
            {
                max_length = max(max_length, len);
                len=1;
            }
        }
        
         max_length = max(max_length , len);
        return max_length;
        
        
    }
};