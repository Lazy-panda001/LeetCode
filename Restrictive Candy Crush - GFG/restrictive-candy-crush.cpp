// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string str)
    {
        stack<pair<char,int>> stk;
        string ans="";
         if(k==1)return ans;
        
        for(int i=0; i<str.size(); i++)
        {
            if(stk.size() == 0)
            {
                stk.push({str[i] , 1});
            }
            
            else if(stk.top().first != str[i])
            {
                stk.push({str[i] , 1});
            }
            
            else if(stk.top().first == str[i])
            {
                stk.push({str[i] , stk.top().second + 1});
                
                if( k == stk.top().second)
                {
                    int x = k;
                    while(x--)
                    {
                        stk.pop();
                    }
                    
                }
            }
        }
        
        
        while(!stk.empty())
        {
            ans +=stk.top().first;
            stk.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }


};

// { Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}  // } Driver Code Ends