// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n)
    {
    
        // Brute Force -- > O(n^2) ----> it will give TLE
      /*  int max_element = INT_MIN;
        vector<int> res;
        
        for(int i=0; i<n-1; i++)
        {
            max_element = INT_MIN;
            int j = i+1;
            1;
            for(; j<n; j++)
            {
                if(arr[i] > arr[j])
                {
                    max_element = arr[i];
                }
                else
                {
                    break;
                }
            }
            
            if(max_element != INT_MIN and j == n)
            {
                res.push_back(max_element);
            }
            
        }
        
        res.push_back(arr[n-1]);
        return res;*/
        
        // Optimised TC : o(n) and SC : o(n)
        
      
        
       
        vector<int>res;
        
        if(n==0)
        {
            return res;
        }
        
        int curr_leader = arr[n-1];
        
        res.push_back(arr[n-1]);
        
        for(int i=n-2; i>=0; i--)
        {
            if(arr[i] >= curr_leader )
            {
                res.push_back(arr[i]);
                curr_leader = arr[i];
               
            }
        }
        
        reverse(res.begin() , res.end());
        
        return res;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends