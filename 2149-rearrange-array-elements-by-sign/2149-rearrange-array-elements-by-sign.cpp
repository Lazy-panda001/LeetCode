class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n = nums.size();
        
        vector<int>positive_sign;
        vector<int>negative_sign;
        
        for(int i=0; i<n; i++)
        {
            if(nums[i] <0)
            {
                negative_sign.push_back(nums[i]);
            }
            else
            {
                positive_sign.push_back(nums[i]);
            }
        }
        
        vector<int> result;
        
        for(int i=0; i<n/2; i++)
        {
            result.push_back(positive_sign[i]);
            result.push_back(negative_sign[i]);
            
        }

        return result;
        
    }
};