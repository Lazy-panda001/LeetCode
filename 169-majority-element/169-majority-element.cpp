class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int value = nums[0]; // initially let this is the " possible majority element
        int count=1;
        
        for(int i=1; i<nums.size(); i++)
        {
            if(value == nums[i])
            {
                count++;
            }
            else
            {
                count--; // not match
            }
            
            if(count == 0)  // if count becomes zero 
            {
                value = nums[i]; // new "possible  majority element"
                count++;
            }
        }
        
        int count_majority = 0;  // finally it will count majority element 
        
        for(auto it : nums)
        {
            if(value == it)
            {
                count_majority++;
            }
        }
        
        //check majority condition according to question
        if(count_majority > ceil(nums.size() / 2))
        {
            return value;
        }
        return -1;
        
    }
};