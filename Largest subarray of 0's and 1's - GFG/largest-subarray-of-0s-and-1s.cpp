// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int nums[], int n)
    {
        // Your code here
        unordered_map<int,int>ump;
        int curr_sum = 0;
        int res = 0;
        
        for(int i=0; i<n; i++)
        {
            curr_sum += nums[i] == 0 ? -1 : 1;
            
            if(curr_sum == 0)
            {
                res = max(res, i+1);
            }
            
            else if(ump.find(curr_sum) != ump.end())
            {
                res = max(res , i - ump[curr_sum]);
            }
            else
            {
                ump[curr_sum] = i;
            }
        }
        
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends