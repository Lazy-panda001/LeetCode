class Solution {
public:
    vector<int> findLonely(vector<int>& nums) 
    {
        //1st find all unique number
        unordered_map<int,int>ump;
        for(int i=0; i<nums.size(); i++)
        {
            ump[nums[i]]++;
        }
        
        
      /*  for(auto it : ump)
        {
            if(it.second == 1)
            {
                cout<<it.first<<" ";
                nums2.push_back(it.first);
            }
            else if(it.second == 2)
            {
               std::ump.erase(it);
            }
        }
         cout<<endl;*/
        
        vector<int>res;
        
        for(int i=0; i<nums.size(); i++)
        {
            int x = nums[i] - 1;
            int y = nums[i] + 1;
            
            if(ump[nums[i]] == 1 and ump.find(x) == ump.end() and ump.find(y) == ump.end())
            {
                res.push_back(nums[i]);
            }
            
        }
        
        return res;
        
    }
};