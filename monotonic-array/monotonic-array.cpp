class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        if(is_sorted(nums.begin(), nums.end(), greater<int>()) || is_sorted(nums.begin(), nums.end(), less<int>()))
        {
            return true;
        }
        else
            return false;
        
    }
};