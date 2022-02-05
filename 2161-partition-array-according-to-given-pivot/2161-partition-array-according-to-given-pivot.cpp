class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        vector<int> less;
        vector<int> big;
        
        int count_pivot=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            
            if(nums[i] < pivot)
            {
                
                less.push_back(nums[i]);
            }
            else if(nums[i] > pivot)
            {
               
                big.push_back(nums[i]);
            }
            else
                count_pivot++;
        }
      
        while(count_pivot--)
        {
            less.push_back(pivot);
        }
        
        int size = big.size();
        
        for(int i=0; i<size; i++)
        {
            less.push_back(big[i]);
        }
        return less;
        
    }
};