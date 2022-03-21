// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string a, string b) {
        // code here
        string str ="";
        int count=0;
        while(str.size() < b.size())
        {
            str +=a;
            count++;
        }
        
        if(str.find(b) != string::npos) // same size wala issue
        {
            return count;
        }
        
        str +=a;
        count++;
        
        if(str.find(b) != string::npos)
        {
            return count;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends