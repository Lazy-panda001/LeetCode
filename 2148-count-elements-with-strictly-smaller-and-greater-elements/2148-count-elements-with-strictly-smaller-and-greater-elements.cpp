class Solution {
public:
    
    bool all_same(vector<int>& nums)
    {
        int first = nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] != first)
            {
                return 0;
            }
        }
        return 1;
    }
    
    
    int countElements(vector<int>& nums) 
    {
        int n = nums.size();
        
        if(all_same(nums) == true)
        {
            return 0;
        }
        else
        {
        int max_val = *max_element(nums.begin(), nums.end());
        
        int min_val = *min_element(nums.begin(), nums.end());
        
        int count_max = count(nums.begin(), nums.end(),max_val);
        
        int count_min = count(nums.begin(), nums.end(),min_val);

        return (n - count_max - count_min);
        }
    }
    
};