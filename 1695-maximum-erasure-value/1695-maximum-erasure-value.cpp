class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        int n = nums.size();
        set<int>st;
        int start=0, end=0;
        int max_sum = INT_MIN;
        int curr_sum = 0;
        
        while(end < n)
        {
            while(st.find(nums[end]) != st.end())
            {
                curr_sum = curr_sum - nums[start];
                st.erase(nums[start]);
                start++;
            }
            
            curr_sum = curr_sum + nums[end];
            st.insert(nums[end]);
            end++;
            max_sum = max(max_sum , curr_sum);    
        }
        
        return max_sum;
        
    }
};