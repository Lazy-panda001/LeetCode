class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxE = *max_element(nums.begin(), nums.end());
        cout<<maxE;
        
        int n = nums.size();
        int i=0;
        int j=0;
        
        int countMax=0;
        long long ans=0;
        
        while(j<n) {
            
            if(nums[j] == maxE) {
                countMax++;
            }
            
            while(countMax == k) 
            {    
                ans += n-j;
                
                if(nums[i] == maxE) 
                {
                    countMax--;
                }
                
                i++;    
            }
            
            j++;
        }
        return ans;
    }
};