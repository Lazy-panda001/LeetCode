class Solution {
public:
    long long minimumRemoval(vector<int>& beans) 
    {
        
        long long n = beans.size();
        
        sort(beans.begin(), beans.end());
        
        long long total_sum = 0;
        
        for(auto it : beans) total_sum +=it;
        
        long long curr_sum = 1e18;
        
        for(long long i=0; i<n; i++)
        {
            long long curr = total_sum - (n-i)*(long long)beans[i] * 1ll;
            curr_sum = min(curr_sum , curr);
        }
        
        return curr_sum;
    }
};