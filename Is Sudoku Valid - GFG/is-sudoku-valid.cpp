// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> board)
    {
        // code here
         unordered_set<string> st;
        
        int r = board.size();
        int c = board[0].size();
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(board[i][j] != 0)
                {
                    int num = board[i][j];
                    
                    string row_cel =  "row"+ to_string(i)+ to_string(num);
                    string col_cel =  "col"+ to_string(j)+ to_string(num);
                    string box_cel = "box" + to_string(i/3*3+j/3) + to_string(num);
                    
                    if(st.find(row_cel) != st.end() || st.find(col_cel) != st.end() || st.find(box_cel) != st.end())
                    {
                        return 0;
                    }
                    st.insert(row_cel);
                    st.insert(col_cel);
                    st.insert(box_cel);
                }
                    
            }
        }
        
        return 1;   
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends