class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    {
        int n = nums.size();
        vector<long long> prefix_sum(n,0);
        
        prefix_sum[0] = nums[0];
     //   cout<<prefix_sum[0]<<" ";
        for(int i=1; i<n; i++)
        {
            prefix_sum[i] = prefix_sum[i-1] + nums[i];
           // cout<<prefix_sum[i]<<" ";
        }
        
        cout<<endl;
        
        long long total_sum = prefix_sum[n-1];
        
        vector<  long long> res(n,0);
        
        long long min_avg = INT_MAX;
        int ans=0;
        
        for(int i=0; i<n; i++)
        {
              long long curr_val = prefix_sum[i];
            
            //  long long index = i+1;
              long long n_index = n - i-1;
            
              long long first_part = (long long)(curr_val/(i+1));
            
              long long left_sum = (  long long)(total_sum - prefix_sum[i]);
            
              long long second_part=0; 
            
            if(n_index != 0) 
            {
                second_part = (  long long)(left_sum / n_index);
            }
            else
            {
                second_part = 0;
            }
            
            res[i] = abs((long long)(first_part - second_part));
            
            if(min_avg > res[i])
            {
                min_avg = res[i];
                ans = i;
            }
//             cout<<ans<<" ";
            
//             cout<<i<<" "<<res[i]<<" "<<endl;    
        }
        
        return ans;
        
    }
};