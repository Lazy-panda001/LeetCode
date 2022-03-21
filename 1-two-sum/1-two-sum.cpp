class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> ump;
        vector<int> res;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(ump.find(target - nums[i]) != ump.end())
            {
                res.push_back(ump[target-nums[i]]);
                res.push_back(i); 
                break;
            }
            else
            {
                ump[nums[i]] =i; // key --> array element, value--> array element ka corresponding index
            }
        }
        
        return res;
        
    }
};