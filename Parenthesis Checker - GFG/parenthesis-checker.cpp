// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string str)
    {
        // Your code here
        stack<int> stk;
        
        int n = str.size();
        
        if(n == 1)
        {
            return false;
        }
        int i=0;
        for(; i<n; i++)
        {
            char ch = str[i];
            
            if(ch == '(' or ch == '{' or ch == '[')
            {
                stk.push(ch);
            }
            
            else if(ch == ')')
            {
                if(stk.size() == 0 or stk.top() != '(')
                    return false;
                else
                    stk.pop();
            }
            
            else if(ch == '}')
            {
                if(stk.size() == 0 or stk.top() != '{')
                    return false;
                else
                    stk.pop();
            }
            
            else if(ch == ']')
            {
                if(stk.size() == 0 or stk.top() != '[')
                    return false;
                else
                    stk.pop();
            }
        }
        
        if(stk.empty() == true)
            return true;
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends