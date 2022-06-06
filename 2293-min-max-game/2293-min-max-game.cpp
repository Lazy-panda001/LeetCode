class Solution {
public:
    int minMaxGame(vector<int>& nums) 
    {
        while(nums.size() > 1)
        {
            vector<int> temp;
            for(int i=0; i<nums.size()/2; i++)
            {
                int val = 0;
                if( i % 2 == 1)
                {
                    val = max(nums[2*i], nums[2*i + 1]);
                }
                else
                {
                    val = min(nums[2*i], nums[2*i+1]);
                }
                
                temp.push_back(val);
            }
            
            nums = temp;
        }
        return nums[0];
        
    }
};