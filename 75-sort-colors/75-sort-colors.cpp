class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int i= 0; // it will point everyone
        int j= 0; // work for zero
        int k = nums.size()-1; // pointing for 2
        
        while(i<=k)
        {
            if(nums[i] == 1)
            {
                i++;
            }
            else if(nums[i] == 2)
            {
                swap(nums[i],nums[k]);
                k--;
            }
            else if(nums[i] == 0)
            {
                 swap(nums[i] , nums[j]);
                 j++;
                i++;
            }
        }
        return;
    }
};