class Solution {
public:
    bool findSubarrays(vector<int>& nums) 
    {
        set<int> st;
        for(int i=1; i<nums.size(); i++)
        {
            int add = nums[i-1] + nums[i];
            if(st.find(add) != st.end())
            {
                return true;
            }
            st.insert(add);
        }
        return false;
        
    }
};