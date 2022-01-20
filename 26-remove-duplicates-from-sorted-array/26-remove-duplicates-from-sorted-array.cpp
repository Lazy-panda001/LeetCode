class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
      int n = nums.size();
      if(n == 0)
      {
        return 0;
      }
      int slow = 0;
      int fast = 0;
      
      while(fast< n)
      {
        if(nums[slow] == nums[fast])
        {
          fast++;
        }
        else // mismatch
        {
          slow++;
          nums[slow] = nums[fast];
          fast++;
        }
        
      }
      return slow+1;
        
    }
};