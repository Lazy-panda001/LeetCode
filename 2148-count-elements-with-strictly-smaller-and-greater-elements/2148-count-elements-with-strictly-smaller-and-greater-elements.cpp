class Solution 
{
public:
    
    int countElements(vector<int>& nums) 
    {
        int n = nums.size();
        
        
        int max_val = *max_element(nums.begin(), nums.end());
        
        int min_val = *min_element(nums.begin(), nums.end());
        
        int count_max = count(nums.begin(), nums.end(),max_val);
        
        int count_min = count(nums.begin(), nums.end(),min_val);
        
        if(max_val == min_val)
        {
            return 0;
        }

        return (n - count_max - count_min);
    }
};