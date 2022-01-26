// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(long long arr[], long long low, long long mid, long long high, long long int &count)
    {
        long long i = low;
        long long j = mid+1;
        long long ar[high - low  + 1];
        long long k=0;
        
        while(i<=mid and j <= high)
        {
            if(arr[i] <= arr[j])
            {
                ar[k] = arr[i];
                k++;
                i++;
            }
            else
            {
                count = count + (mid-i + 1); // only extra line no 1
                ar[k] = arr[j];
                k++;
                j++;
            }
        }
        while(i<=mid)
        {
            ar[k] = arr[i];
                k++;
                i++;
        }
        
        while(j<=high)
        {
            ar[k] = arr[j];
                k++;
                j++;
        }

        // restore to original array arr from ar //
        
        for(int i=0; i<k; i++)  // extra code for restore in array in original array
        {
            arr[low] = ar[i];
            low++;
        }
    }
    
    void mergeSort(long long arr[], long long low,long long high, long long int &count)
    {
        if(low < high)
        {
            long long  mid = (low + high)/2;
        
            mergeSort(arr,low,mid,count);
            
            mergeSort(arr,mid+1,high,count);
            
            merge(arr,low,mid,high,count);
        }
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
       long long int count =0;
        mergeSort(arr,0,n-1,count);
        return count;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends