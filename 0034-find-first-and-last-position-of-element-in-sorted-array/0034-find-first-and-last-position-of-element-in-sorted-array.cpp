class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        auto first = lower_bound(nums.begin(), nums.end(), target);
        auto last = upper_bound(nums.begin(), nums.end(), target);
        
       
        if(!binary_search(nums.begin(), nums.end(), target))
        {
            return {-1,-1};
        }
        
        vector<int> index;
        
        index.push_back(first - nums.begin());
        index.push_back(last-nums.begin() -1);
        return index;
        
    }
};