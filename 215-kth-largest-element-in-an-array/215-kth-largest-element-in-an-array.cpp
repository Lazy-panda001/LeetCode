class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int> maxh;
        
        for(auto val : nums)
        {
            maxh.push(val);
        }
        
        while(--k)
        {
            maxh.pop();
        }
        return maxh.top();
        
    }
};