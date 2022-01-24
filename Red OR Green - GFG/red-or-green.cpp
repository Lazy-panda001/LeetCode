// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution 
{
  public:
       int RedOrGreen(int N,string str) 
       {
           //code here
           
           int n = str.size();
           
           int count_red = 0;
           int count_green=0;
           for(int i=0; i<str.size(); i++)
           {
               if(str[i] == 'R')
               {
                   count_red++;
               }
               else if(str[i] == 'G')
               {
                   count_green++;
               }
           }
           
           int left_red = n - count_red;
           int left_green = n - count_green;
           
           return min(left_red, left_green);
           
           
           
        }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}  // } Driver Code Ends