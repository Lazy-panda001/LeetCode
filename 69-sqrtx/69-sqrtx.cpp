class Solution {
public:
    int mySqrt(int x) {
       int low = 1;
        int high = x/2;
        int ans = 0;
        if(x<=1)
        {
            return x;
        }
        while(low<=high)
        {
            long long mid = low + (high-low)/2;
            if(mid*mid > x)
            {
                high = mid-1;
            }
            else
            {
                ans = mid;
                low = mid+1;
            }
        }
        return ans;
    }
};