// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
  void split(string str , vector<string>& words , char del)
  {
      string temp="";
      
      int i=0;
      while(i < str.size())
      {
          while(i<str.size() and str[i] != del)
          {
              temp +=str[i];
              i++;
          }
          
        words.push_back(temp);
        temp = "";
        i++;
          
      }
    
  }
  
  string remove_zero(string str)
  {
     int i=0;
     while(i < str.size() and str[i] == '0')
     {
         i++;
     }
     
     if(i < str.size())
     {
         return str.substr(i);
     }
     return "0";
  }
    string newIPAdd (string str)
    {
        //code here.
        vector<string> words;
        split(str , words,  '.');
        
        string ans="";
        
        for(int i=0; i<words.size(); i++)
        {
            string temp = remove_zero(words[i]);
            ans +=temp + '.';
        }
        
        return ans.substr(0,ans.size()-1);
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends