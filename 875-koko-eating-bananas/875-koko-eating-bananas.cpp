class Solution {
public:
    
    bool isPossible(vector<int>& nums, int hour , int k)
    {
        long long total_time =0;
        
        for(int i=0; i<nums.size(); i++)
        {
            total_time +=(long long) (ceil(nums[i]*1.0 / k)); 
        }
        
        if(total_time <= hour)
        {
            return true;
        }
        return false;
    }
    
    int minEatingSpeed(vector<int>& piles, int hour) 
    {
        int max_value = *max_element(piles.begin(),piles.end());
       // cout<<max_value<<" ";
        
        int low=1;
        int high = max_value;
       // int k = 0;
        
        int ans=0;
        
        while(low <= high)
        {
            int mid = low + (high - low)/2;
           // k = mid;
            
            if(isPossible(piles, hour , mid) == true)
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        
        return ans;
        
    }
};