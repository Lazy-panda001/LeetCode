// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) 
{
    int left_max[n];
    int right_min[n];
    
    left_max[0] = arr[0];
    right_min[n-1] = arr[n-1];
    
    // fill all maximum element starting from 0th index to present i
    
    int max_ele = arr[0];
    for(int i=1; i<n;i++ )
    {
        max_ele = max(max_ele , arr[i]);
        left_max[i] = max_ele; 
    }
    
    int min_ele = arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        min_ele = min(min_ele , arr[i]);
        right_min[i] = min_ele;
    }
    
    for(int i=1; i<n-1; i++)
    {
        if(left_max[i] == arr[i]  and right_min[i] == arr[i])
        {
            return arr[i];
        }
    }
    return -1;
    
    
}