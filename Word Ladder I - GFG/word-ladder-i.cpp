// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int wordLadderLength(string Begin, string End, vector<string>& wordList) 
    {
        // Code here
        
        unordered_set<string> dict(wordList.begin(), wordList.end());
        
        if(dict.find(End) == dict.end()) // means end string is not present
            return 0;
        
        queue<string> qu;
        qu.push(Begin);
        int steps=1;
        
       while(!qu.empty())
        {
           
           int size = qu.size();
           
           for(int i=0; i<size; i++)
           {
               string str = qu.front(); qu.pop();
               
                if(str == End)
                {
                    return steps; // breaking point
                }
               
               for(int i=0; i<str.size(); i++)
               {
                   for(char ch = 'a' ; ch<='z'; ch++)
                   {
                       char c = str[i]; // 0 , 1 , 2
                       str[i] = ch; // modify
                       
                       if(dict.find(str) != dict.end())  // present in dictionary
                       {
                           dict.erase(str);
                           qu.push(str);
                       }
                       
                       // again got bach to previous string
                       str[i] = c;
                   }
               }
           }
            steps++;
        }
        return 0;
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends