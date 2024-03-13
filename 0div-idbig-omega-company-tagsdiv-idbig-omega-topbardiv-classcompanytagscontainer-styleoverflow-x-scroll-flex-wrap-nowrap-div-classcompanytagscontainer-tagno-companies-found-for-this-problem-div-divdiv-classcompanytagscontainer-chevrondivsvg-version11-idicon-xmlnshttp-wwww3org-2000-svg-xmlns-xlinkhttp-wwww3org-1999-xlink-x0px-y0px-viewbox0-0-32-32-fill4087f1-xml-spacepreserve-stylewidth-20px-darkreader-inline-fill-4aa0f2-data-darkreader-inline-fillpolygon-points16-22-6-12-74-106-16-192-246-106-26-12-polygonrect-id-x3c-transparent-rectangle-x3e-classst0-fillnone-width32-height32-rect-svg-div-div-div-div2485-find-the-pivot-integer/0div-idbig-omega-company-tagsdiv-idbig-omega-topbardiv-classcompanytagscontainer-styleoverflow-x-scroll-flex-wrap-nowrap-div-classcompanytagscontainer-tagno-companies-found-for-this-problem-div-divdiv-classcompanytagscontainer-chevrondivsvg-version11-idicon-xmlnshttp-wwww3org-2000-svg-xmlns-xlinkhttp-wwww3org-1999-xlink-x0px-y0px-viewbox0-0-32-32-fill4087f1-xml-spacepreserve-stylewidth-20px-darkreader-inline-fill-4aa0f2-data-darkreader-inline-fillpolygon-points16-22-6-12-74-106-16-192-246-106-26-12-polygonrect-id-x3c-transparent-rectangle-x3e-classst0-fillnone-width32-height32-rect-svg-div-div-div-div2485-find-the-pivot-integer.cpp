class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) {
            return 1;
        }
        
        int total_sum = n*(n+1)/2;
        
        int low = 1;
        int high = n;
        
        
        
        while(low <= high) {
            int mid_val = (low + high)/2;
            
            int sum_till_mid = mid_val * (mid_val+1) / 2;
            int left_sum = total_sum - sum_till_mid + mid_val;
            
            if(left_sum == sum_till_mid) {
                return mid_val;
            }
            
            else if(left_sum > sum_till_mid) {
                low = mid_val+1;
            }
            else {
                high = mid_val-1;
            }
            
        }
        return -1;
    }
};