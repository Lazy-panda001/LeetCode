class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        
        unordered_map<int,int> ump;
        
        int curr_sum = 0;
        
        int count_subarrays=0;
        
        for(int i=0; i<n; i++)
        {
            curr_sum +=nums[i];
            
            if(curr_sum == k)
                count_subarrays++;
            if(ump.find(curr_sum - k) != ump.end())
            {
                count_subarrays += ump[curr_sum - k];
            }
            
            ump[curr_sum]++;
        }
        
        return count_subarrays;
        
    }
};