class Solution {
public:
    int findClosestNumber(vector<int>& nums) 
    {
        int distance = abs(nums[0]);
        int curr_num = nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            int val = nums[i];
            
            int new_distance = abs(nums[i]) - 0;
            
            if(new_distance < distance)
            {
                curr_num = val;
                distance = abs(new_distance);
            }
            else if(new_distance == distance)
            {
                curr_num = max(curr_num , val);
            }
        }
        
        return curr_num;
        
    }
};