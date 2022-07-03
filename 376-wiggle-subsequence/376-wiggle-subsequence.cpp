class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
        int n = nums.size();
        
        int peeks = 1, vally = 1, i;
        
        for(i=1; i<n; i++)
        {
            if( nums[i] > nums[i-1])
            {
                peeks = vally +1;
            }
            
            // check vally
            else if(nums[i] < nums[i-1] )
            {
                vally = peeks+1;
            } 
        }
        
       
        return max(peeks , vally);
        
    }
};