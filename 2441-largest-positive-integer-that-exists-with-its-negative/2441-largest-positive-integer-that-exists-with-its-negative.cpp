class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        unordered_set<int> ust;
        
        int max_val = -1;
        
        for(int i=0; i<nums.size(); i++)
        {
            int curr_val = nums[i];
            
            if(curr_val < 0)
            {
                int pos_val = abs(curr_val);
                if(ust.find(pos_val) != ust.end())
                {
                    max_val = max(max_val,pos_val);
                }
                else
                {
                    ust.insert(curr_val);
                }
            }
            
            else // curr_val > 0
            {
                int neg_val = -curr_val;
                if(ust.find(neg_val) != ust.end())
                {
                    max_val = max(max_val, abs(neg_val));
                }
                else
                {
                    ust.insert(curr_val);
                }
            }       
        }
        return max_val;
        
    }
};