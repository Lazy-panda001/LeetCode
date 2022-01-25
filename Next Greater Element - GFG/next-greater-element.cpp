// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        // Your code here
        // Brute Force
        /*vector<long long> res;
        int j=0;
        for(int i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i] < arr[j])
                {
                    res.push_back(arr[j]);
                    break;
                }
            }
            
            if(j == n)
            {
                res.push_back(-1);
            }
        }
        
        res.push_back(-1);
        return res;*/
        
        vector<long long>res;
        stack<long long> stk;
        
        for(int i=n-1; i>=0; i--)
        {
            if(stk.size() == 0)
            {
                res.push_back(-1);
            }
            
            else if(stk.size() >0 and stk.top() > arr[i])
            {
                res.push_back(stk.top());
            }
            
            else if(stk.size() >0 and stk.top() <= arr[i])
            {
                while(stk.size() >0 and stk.top()<= arr[i])
                {
                    stk.pop();
                }
                
                if(stk.size() == 0)
                {
                    res.push_back(-1);
                }
                else if(stk.top() > arr[i])
                {
                    res.push_back(stk.top());
                }
            }
        stk.push(arr[i]);
        }
        
        reverse(res.begin() , res.end());
        return res;
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
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends