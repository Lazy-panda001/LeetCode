// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& v, int n) 
    {
        // Your code goes here
        
       // vector<int>res(n+1,0);
        
       /* int res[n+1]={0};
      
	    for(int i=0;i<=n+1;i++)
	    {
		    res[array[i]]++;
	    }
	    
	    for(int i=1;i<=n;i++)
	    {
		    if(res[i]==0)
		    {
			    return i;
		    }
	    }*/
	     int count[n+1]={0};
        for(int i=0;i<v.size();i++){
            count[v[i]]++;
        }
        for(int j=1;j<=n;j++){
            if(count[j]==0)
               return j;
        }
	    
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