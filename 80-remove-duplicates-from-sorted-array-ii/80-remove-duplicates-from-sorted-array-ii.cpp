class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
      int n = nums.size();
      if(n < 3)
      {
        return n;
      }
      int slow =2;
      int fast =2;
      
      while(fast<n)
      {
        if(nums[fast] != nums[slow-2])
        {
          nums[slow] = nums[fast];
          slow++;
          fast++;
        }
        else
          fast++;
      }
      return slow;
        
    }
};