class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        unordered_set<int> ust;
        
        sort(nums.begin(), nums.end());
        
        int low =0, high = nums.size()-1;
        
        while(low < high)
        {
            ust.insert(nums[low++] + nums[high--]);
        }
        
        return ust.size();
        
    }
};