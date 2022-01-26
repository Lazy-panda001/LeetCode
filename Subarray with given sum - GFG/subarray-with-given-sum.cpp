// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long sum)
    {
        // Your code here
        int curr_sum = arr[0];
        int low=0;
        int high =0;
        
        while(low<n and high < n)
        {
            // base case
            if(curr_sum == sum)
            {
                return {low+1,high+1};
            }
            
            else if(curr_sum < sum or low == high) // low == high only for initial time
            {
                high++;
                curr_sum +=arr[high];
            }
            
            else if(curr_sum > sum)
            {
                curr_sum -=arr[low];
                low++;
            }
        }
        
        return{-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends