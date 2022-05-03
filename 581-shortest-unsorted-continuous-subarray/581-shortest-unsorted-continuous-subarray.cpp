class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        bool flag = true;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1]+1 != nums[i] && nums[i-1] != nums[i])
            {
                flag = false;
                break;
            }
            else if(nums[i-1] == nums[i])
            {
                flag = true;
            }
             if(flag == true && i==nums.size()-1)
             {
                // cout<<nums[nums.size()-1];
                 return 0;
             }
        }
        int low = 0;
        int high = nums.size()-1;
         if(nums.size() == 1)
        {
            return 0;
        }
        vector<int> temp;
        temp = nums;
        sort(temp.begin(),temp.end());
        for(int i=0; i<nums.size(); i++)
        {
            
                if(nums[i] != temp[i])
                {
                    high = min(high,i);
                    low = max(low,i);
                }
        }
        cout<<low;
        cout<<high;
        return low-high+1;
    }
};
        
     