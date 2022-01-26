class Solution {
public:
    int subarraySum(vector<int>& nums, int sum) 
    {
        int curr_sum = 0;
        unordered_map<int,int> ump;
        int i=0;
        int count=0;
        while(i < nums.size())
        {
            curr_sum +=nums[i];
            if(curr_sum == sum)
            {
                count++;
            }
            
            if(ump.find(curr_sum - sum) != ump.end())
            {
                count += ump[curr_sum - sum];   
            }
            ump[curr_sum]++;
            
        i++;
        }
        return count;
    }
};