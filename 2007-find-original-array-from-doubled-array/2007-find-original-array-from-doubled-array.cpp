class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) 
    {
        int n = nums.size();
        
        if(n % 2 !=0)
        {
            return {};
        }
        
        unordered_map<int,int> ump;
        for(int i=0; i<n; i++)
        {
            ump[nums[i]]++;
        }
        
        /*for(auto it : ump)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        */
        sort(nums.begin(), nums.end());
        
        vector<int> res;
        
        for(int i=0; i<n; i++)
        {
            int doubly = nums[i]*2;
            if(ump[nums[i]] == 0)
                continue;
            if(ump[doubly] == 0)
            {
                return {};
            }
            
            ump[doubly]--;
            ump[nums[i]]--;
            res.push_back(nums[i]);
        }
        
        return res;
        
    }
};