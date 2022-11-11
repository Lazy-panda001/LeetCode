class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int low = 0;
        int high = 0;
        
        int n = nums.size();
        
        while(high < n)
        {
            if(nums[low] == nums[high]) // match
            {
                high++;
            }
            
            else // miss match
            {
                low++;
                nums[low] = nums[high];
                high++;
            }
        }
        return low+1;
    }
};