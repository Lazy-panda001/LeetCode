// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *nums, int n) 
    {
        // code here
    int *res = new int(2);
   // int n = nums.size();
    for(int i=0; i<n;)
    {
        if(nums[i] != nums[nums[i]-1])
        {
            swap(nums[i], nums[nums[i]-1]);
        }
        else
        {
            i++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(nums[i] != i+1)
        {
            res[0] = nums[i];
            res[1] = i+1; 
        }
    }
    return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends