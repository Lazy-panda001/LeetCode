class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums)
    {
       
        int low = 0;
        int high = nums.size();
        
        vector<int> temp;
        temp = nums;
        sort(temp.begin(),temp.end());
        for(int i=0; i<nums.size(); i++)
        {
            
                if(nums[i] != temp[i])
                {
                    high = min(high,i);
                    low = max(low,i);
                }
        }
        
        return low-high >=0 ? low - high+1 : 0;
    }
};
        
     