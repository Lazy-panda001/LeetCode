class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int> ump;
        
        int ans=-1;
        for(int i=0; i<n; i++)
        {
            ump[nums[i]]++;
        }
        
        for(auto it: ump)
        {
            int val = it.second;
            if(val > ceil(n/2))
            {
                ans = it.first;
            }
        }
        return ans;
        
    }
};