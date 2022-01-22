class Solution {
public:
   // #define mod 1000000007
    int threeSumMulti(vector<int>& arr, int target) 
    {
        long long total_count=0;
        
        int mod = 1000000007;
        
        sort(arr.begin(), arr.end());
        int sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            sum = target - arr[i];
            int left = i+1;
            int right = arr.size()-1;
            
            while(left < right)
            {
                if(arr[left] + arr[right] > sum)
                {
                    right--;
                }
                else if(arr[left] + arr[right]  < sum)
                {
                    left++;
                }
                else // sum equal
                {
                    int j = left;
                    int k = right;
                    
                    int count_left = 0;
                    int count_right = 0;
                    while(j <= right and arr[j] == arr[left])
                    {
                        count_left++;
                        j++;
                    }
                    if(j>right)
                    {
                      //  int res = ); 
                        total_count = (total_count + ((count_left*(count_left-1))/2 ))% mod;
                    }
                    
                    else
                    {
                        while(k>=j and arr[k] == arr[right])
                        {
                            count_right++;
                            k--;
                        }
                        
                        total_count = (total_count + ((count_left*count_right)%mod)) % mod;
                    }
                    
                left = j;
                right =k;
                    
                }
            }
        }
        
        return total_count;
        
    }
};