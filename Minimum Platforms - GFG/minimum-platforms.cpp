// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int curr_platform = 1;
    	
    	int total_need = 1;
    	
    	int i=1;
    	int j=0;
    	
    	while(i<n and j<n)
    	{
    	    if(arr[i] <= dep[j])  // train age chole asbe and charbe deri kre, to platform lagbe extra
    	    {
    	        curr_platform++; // platform lagbe karon deri kre train charbe
    	        i++;
    	        
    	        total_need = max(total_need , curr_platform);
    	    }
    	    else if(arr[i] > dep[j])  // asar time boro but charar time choto so train chere chole jabe asar age
    	    {
    	        j++;
    	        curr_platform--;
    	        
    	    }
    	}
    	
    	return total_need;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends