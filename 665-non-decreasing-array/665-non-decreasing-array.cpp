class Solution {
public:
    bool checkPossibility(vector<int>& nums) 
    {
        int n = nums.size();
        if(n < 2)
            return true;
        
        int count = 0;
        
        for(int i=0; i<n-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                count++;
                
                if(count > 1)
                {
                    return false;
                }
                
                if( i > 0 and nums[i-1] > nums[i+1]) // 2 3 1
                {
                    nums[i+1] = nums[i]; // 2 3 3
                }
                else // 2 5 3
                {
                    nums[i] = nums[i+1]; // 2 3 3 
                }
            }
        }
        return true;
        
    }
};