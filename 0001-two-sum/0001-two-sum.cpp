class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        
         int n = nums.size();
        
        /* Brute Force Method
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return{i , j};
                }
            }
        }
        return {};
        */
        
        // Optimised Method
        unordered_map<int,int> ump;
        for(int i=0; i<n; i++)
        {
             if(ump.find(target - nums[i]) != ump.end())
             {
                 return {ump[target - nums[i]], i};
             }
            ump[nums[i]] = i;
        }
        return{};
        
    }
};