class Solution {
public:
    int pivotInteger(int n) 
    {
        if(n == 1)
        {
            return 1;
        }
        
        int low = 1;
        int high = n;
        
        int total_sum = (n*(n+1))/2;
        
        int sum_till_mid = 0;
        
        while(low < high)
        {
            int mid = (low + high)/2;
            
            sum_till_mid = (mid*(mid+1))/2;
            
            int left_sum = total_sum - sum_till_mid + mid;
            
            if(left_sum == sum_till_mid)
            {
                return mid;
            }
            
            else if(left_sum > sum_till_mid)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return -1;
        
    }
};