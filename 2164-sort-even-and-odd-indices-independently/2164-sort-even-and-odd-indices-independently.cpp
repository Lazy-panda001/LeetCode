class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> even;
        vector<int> odd;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(i % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
                odd.push_back(nums[i]);
        }
        
        sort(odd.begin(), odd.end(), greater<int>());
        
        sort(even.begin(), even.end());
        
        
        
        vector<int> res;
       int e=0, o=0;
        while(e<even.size() or o < odd.size())
        {
            if(e < even.size())
            {
                res.push_back(even[e]);
                    e++;
            }
            
            if(o < odd.size())
            {
                res.push_back(odd[o]);
                o++;
            }
        }
        
        return res;
        
    }
};