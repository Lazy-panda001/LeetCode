class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> res;
        int n = nums.size();
        int power = pow(2,n);
        
        for(int i=0; i<power; i++)
        {
            vector<int> vec;
            for(int j=0; j<n; j++)
            {
                if(i & 1<<j)
                {
                    vec.push_back(nums[j]);
                }
            }
            
            res.push_back(vec);
        }
        
        return res;
        
    }
};