// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
  
    void diag(vector<vector<int>>& mat, int row, int col)
    {
        vector<int> values;
        
        int r = row, c = col;
        
        while(r < mat.size() and c < mat[0].size())
        {
            values.push_back(mat[r++][c++]);
        }
        
        if(col > 0 and row == 0)
        {
            sort(values.begin(), values.end(), greater<int>());
        }
        
        else if(row > 0 and col == 0)
        {
            sort(values.begin(), values.end());
        }
        
        int i=0;
        while(row < mat.size() and col < mat[0].size())
        {
            mat[row++][col++] = values[i++];
        }
    }
    
    void diagonalSort(vector<vector<int> >& mat, int n, int m) 
    {
       
      
        // traverse diagonals of the matrix which all are start from row 0
        
        for(int col =1; col <m; col++)
        {
            diag(mat, 0, col);
        }
        
        for(int row=1; row<n; row++)
        {
            diag(mat , row,0);
        }
        
        //return mat;
        
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        int inputline2[n*m];
        for (int i = 0; i < n*m; ++i)
            cin>> inputline2[i];
        vector<vector<int> > matrix( n , vector<int> (m, 0));

        for(int i=0; i<n; i++) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = inputline2[i * m + j]; 
            }
        }
        
        Solution ob;
        ob.diagonalSort(matrix, n, m);

        // print the modified matrix
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                cout << matrix[i][j] << " "; 
            } 
            cout << endl; 
        }    
    }
    return 0;
}

  // } Driver Code Ends