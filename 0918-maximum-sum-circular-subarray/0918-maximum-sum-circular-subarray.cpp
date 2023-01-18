class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) 
    {
        int total_sum=0;
        int max_sum=INT_MIN, min_sum = INT_MAX;
        int max_ending_here = 0, min_ending_here = 0;
        
        for(auto x: A)
        {
            total_sum += x;
            max_ending_here = max(max_ending_here + x , x);
            max_sum = max(max_sum, max_ending_here);
            min_ending_here = min(min_ending_here + x, x);
            min_sum = min(min_ending_here, min_sum);
        }
        if(max_sum > 0)
            return max(max_sum, total_sum - min_sum);
        return max_sum;
        
    }
};