class Solution {
public:
    int xorBeauty(vector<int>& nums) 
    {
        int ans = 0;
        
        for(auto val : nums)
        {
            ans = ans ^ val;
        }
        return ans;
        
    }
};