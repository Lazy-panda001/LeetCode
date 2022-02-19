class Solution {
public:
    int minimumDeviation(vector<int>& nums) 
    {
        // multiply 2 to all odd value
        int n = nums.size();
        int minimum_value = INT_MAX;
        int maximum_value = INT_MIN;
        priority_queue<int> maxH;
        for(int i=0; i<n; i++)
        {
            if(nums[i] % 2 != 0)
            {
                nums[i] = nums[i]*2;
            }
            
            maximum_value = max(maximum_value, nums[i]);
            minimum_value = min(minimum_value , nums[i]);
            maxH.push(nums[i]);
            
        }
        
        int minimum_dev = maximum_value - minimum_value;
        
        while(maxH.top() % 2 == 0) // untill top value is even
        {
            int top = maxH.top(); maxH.pop();
            
            minimum_dev = min(minimum_dev , top - minimum_value);
            top = top /2;
            minimum_value = min(top , minimum_value);
            maxH.push(top);
        }
        
        minimum_dev = min(minimum_dev , maxH.top() - minimum_value);
        
        return minimum_dev;
        
    }
};