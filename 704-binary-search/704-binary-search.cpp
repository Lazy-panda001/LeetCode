class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int slow = 0;
        int fast = nums.size()-1;
        int ans = -1;
        
        while(slow <= fast)
        {
            int mid = slow + (fast - slow)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                break;
            }
            else if(nums[mid] < target)
            {
                slow = mid+1;
            }
            else
                fast = mid-1;
        }
        
        return ans;
        
    }
};