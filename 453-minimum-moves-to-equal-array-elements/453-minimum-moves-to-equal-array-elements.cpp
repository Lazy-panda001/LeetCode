class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int total_sum =  accumulate(nums.begin(), nums.end(),0);
        
        int minimum_value = *min_element(nums.begin(), nums.end());
        
        return total_sum - minimum_value*nums.size();
        
        
    }
};