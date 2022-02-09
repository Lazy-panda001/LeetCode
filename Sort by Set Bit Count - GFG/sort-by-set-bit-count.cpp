// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    int count_set(int num)
    {
        int count=0;
        while(num)
        {
            count++;
            num = num & (num-1);
        }
        return count;
    }
    
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        vector<int> set_bits(n);
        for(int i=0; i<n; i++)
        {
           set_bits[i] = count_set(arr[i]);
        }
        
        vector<int> sorted;
        
        for(int k=31; k>=0; k--)
        {
            for(int i=0; i<n; i++)
            {
                if(set_bits[i] == k)
                {
                    sorted.push_back(arr[i]);
                }
            }
        }
        
        for(int i=0;i<n; i++)  // 
        {
            arr[i] = sorted[i];
        }
        return;
    
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends