// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int nums[], int n, int k) {
        // code here
         //1 . find maximum sum of subarray size k
      // 2. find avg and return res;
      int i=0;
      int j=0;
     // int n = nums.size();
      
      double max_sum = INT_MIN;
      
      double sum =0.0;
      
      int start;
      
      while(j<n)
      {
        sum += nums[j]; // include
        //cout<<sum<<" ";
        
        if(j-i+1 < k)
        {
          j++;
        }
        else if(j-i+1 == k)
        {
          if(max_sum <= sum)
        {
            max_sum = sum;
             start = i;
            
        }
          sum = sum - nums[i];
          i++;
          j++;
        }
      }
    // cout<<max_sum;
      // now u have maximum sum
      double avg = max_sum / k;
      
      return start;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends