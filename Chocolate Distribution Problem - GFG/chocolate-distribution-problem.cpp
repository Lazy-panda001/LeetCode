// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> arr, long long n, long long m)
    {
    //code
    long long answer = INT_MAX;
    
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<= n-m; i++)
    {
        long long minimum = arr[i];
        long long max = arr[i+m-1];
        
        long long diff = max - minimum;
        
        answer = min(answer , diff);
    }
    return answer;
    }
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends