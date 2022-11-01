class Solution {
public:
    int averageValue(vector<int>& nums) 
    {
        int count = 0;
        
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] % 2 == 0 and nums[i] % 3 == 0)
            {
                sum +=nums[i];
                count++;
            }
        }
        
        if(sum == 0)
        {
            return 0;
        }
        else
            return sum / count;
        
    }
};