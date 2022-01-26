// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& arr, int n) 
    {
        // Your code goes here
        // space : O(1)
        int total_sum = 0;
        for(int i=0; i<n-1; i++)
        {
            total_sum +=arr[i];
        }
        
       // cout<<total_sum<<endl;
        int natural_sum = (n*(n+1))/2;
      //  cout<<natural_sum<<" ";
        
        return (natural_sum - total_sum);
        
        /*// Space: O(n)
        vector<int> res(n+1,0);
        
        for(int i=0; i<array.size(); i++)
        {
            res[array[i]]++;
        }
        
        for(int i=1; i<=n; i++)
        {
            if(res[i] == 0)
            {
                return i;
            }
        }*/
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends