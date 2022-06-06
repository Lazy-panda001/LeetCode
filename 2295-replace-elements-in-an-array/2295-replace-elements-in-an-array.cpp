class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) 
    {
        unordered_map<int,int>ump;
        for(int i=0; i<nums.size(); i++)
        {
            ump[nums[i]] = i;
        }
        
        for(auto it : op)
        {
            int index = ump[it[0]];
            nums[index] = it[1];
            ump[it[1]] = index;
        }
        return nums;
    }
};