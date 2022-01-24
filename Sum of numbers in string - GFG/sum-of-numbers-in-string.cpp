// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int final_sum=0;
    	
    	int i=0;
    	while(i < str.size())
    	{
    	    int num=0;
    	    while(str[i] >='0' and str[i]<='9')
    	    {
    	        num = num*10 + str[i] -'0';
    	        i++; 
    	    }
    	    final_sum = final_sum+num;
    	    i++;
    	    
    	}
    return	 final_sum;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends