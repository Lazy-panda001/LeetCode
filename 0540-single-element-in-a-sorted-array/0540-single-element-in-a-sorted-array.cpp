class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        
        int start = 0;
        int end = n-1;
        int mid;
        
        //Boundary condition
        if(end == 0) // single element
        {
            return nums[0];
        }
        else if(nums[0] != nums[1])
        {
            return nums[0];
        }
        else if(nums[end] != nums[end-1])
        {
            return nums[end];
        }
        
        // pair index check
        while(start<=end)
        {
            mid = start + (end - start)/2;
            
            // unique elementin property
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1])
            {
                return nums[mid];
            }
            
            else
            {
                if(((mid%2)==0 && nums[mid] == nums[mid+1]) || ((mid % 2) == 1 && nums[mid] == nums[mid-1]))
                {
                    start = mid+1;
                }
                else
                    end = mid-1;
            }
        }
        
        return -1;
    }
};
