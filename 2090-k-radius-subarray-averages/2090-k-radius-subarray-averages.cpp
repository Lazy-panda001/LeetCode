class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k == 0)
            return nums;
        int n = nums.size();
        
        vector<int> result(n,-1);
        
        vector<long long>prefixSum(n,0);
        
        prefixSum[0] = nums[0];
        for(int i=1; i<n; i++)
        {
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }
        
        for(int i=k;i<=n-k-1; i++)
        {
            int last = i+k;
            int first = i-k;
            
            long long sum =prefixSum[last];
            if(first >0)
            {
                sum -= prefixSum[first-1];
            }
            
            result[i]=sum/(2*k+1);
        }
        
        return result;
    }
};