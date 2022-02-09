class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        unordered_map<int,int> ump;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            ump[nums[i]]++;
        }
        
        int count_pairs=0;
        
        for(auto it : ump)
        {
            if( k == 0)
            {
                if(it.second >=2)
                {
                    count_pairs++;
                }
            }
            else
            {
                if(ump.find(it.first - k ) != ump.end())
                {
                    count_pairs++;
                }
            }
        }
        
        return count_pairs;
        
    }
};