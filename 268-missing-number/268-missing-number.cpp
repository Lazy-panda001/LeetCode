class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        
        int total_sum = (n*(n+1))/2;
        
        int curr_sum=0;
        for(auto x : nums)
        {
            curr_sum +=x;
        }
        
        return total_sum - curr_sum;
        
    }
};