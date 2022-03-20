class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        unordered_map<int,int> ump;
        for(int i=0; i<nums.size(); i++)
        {
            ump[nums[i]]++;
        }
        
        for(auto it : ump)
        {
            if(it.second % 2 != 0)
            {
                return false;
            }
        }
        return true;
        
    }
};