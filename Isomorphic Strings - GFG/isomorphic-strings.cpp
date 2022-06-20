// { Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    
    bool check(string str1, string str2)
    {
        map<char,char> ump;
        
        for(int i=0; i<str1.size(); i++)
        {
            if(ump.find(str1[i]) != ump.end())
            {
                if(ump[str1[i]] != str2[i])
                {
                    return false;
                }
            }
            else
                ump[str1[i]] = str2[i];
        
        }
        
        return true;
    }
    
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.size() != str2.size())
        {
            return false;
        }
        return check(str1,str2) and check(str2,str1);
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends