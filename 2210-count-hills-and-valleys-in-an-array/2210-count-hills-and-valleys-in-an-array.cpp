class Solution {
public:
    int countHillValley(vector<int>& nums) 
    {
        vector<int> res;
        
        res.push_back(nums[0]);
        
        for(int i=1; i<nums.size(); i++)
        {
            if(res.back() != nums[i])
            {
                res.push_back(nums[i]);
            }
        }
        
       /* for(auto it : res)
        {
            cout<<it<<" ";
        }
        cout<<endl;*/
        int count =0;
        
        for(int i=1; i<res.size()-1; i++)
        {
            if((res[i] > res[i-1] and res[i] > res[i+1]) or (res[i] < res[i-1] and res[i] < res[i+1]))
                count++;
        }
        
        return count;
        
    }
};