class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int> ump;
        for(int i=0; i<n;i++)
        {
            ump[nums[i]]++;
        }
        
        
        for(auto it:ump)
        {
            if(it.second > ceil(n/2))
            {
                return it.first;
            }
        }
        return -1;
        
    }
};