class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        unordered_map<int,int>ump;
        int max_length = 0;
        int curr_sum = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                curr_sum += (-1);
            }
            else
            {
                curr_sum += 1;
            }
            
            //
            if(curr_sum == 0)
            {
                max_length = max(max_length , i+1);
            }
            else if(ump.find(curr_sum) != ump.end())
            {
                max_length = max(max_length , i - ump[curr_sum]);
            }
            else
            {
                ump[curr_sum] = i;
            }
        }
        return max_length;
        
    }
};