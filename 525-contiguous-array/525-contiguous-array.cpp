class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int curr_sum = 0;
        int max_length = 0;
        unordered_map<int,int> ump;
        for(int i=0; i<nums.size(); i++)
        {
            curr_sum += nums[i] == 0 ? -1 : 1;
            
            if(curr_sum == 0)
            {
                max_length = max(max_length,i+1);
            }
            
            if(ump.find(curr_sum) != ump.end())
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