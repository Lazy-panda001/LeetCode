class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        set<int> st;
        for(int i=0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        
       while(true)
       {
            if(st.count(original) != 0)
            {
                original = original*2;
            }
            else
            {
                break;
            }
       }
        return original;
        
    }
};