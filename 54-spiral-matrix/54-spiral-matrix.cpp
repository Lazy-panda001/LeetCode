class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int minr=0;
        int minc=0;
        int maxr= row-1;
        int maxc = col -1;
        
        int total_ele = row*col;
        int total_count = 0;
        
        vector<int> res;
        
        while(total_count < total_ele)
        {
            // top wall
            for(int i=minr, j=minc; j<=maxc and total_count < total_ele; j++)
            {
                res.push_back(matrix[i][j]);
                total_count++;
            }
            minr++; 
            
            // right wall
            for(int i=minr, j=maxc; i<=maxr and total_count < total_ele; i++)
            {
                res.push_back(matrix[i][j]);
                total_count++;
            }
            maxc--;
            
            // bottom wall
            for(int i=maxr, j =maxc; j>=minc and total_count < total_ele; j--)
            {
                res.push_back(matrix[i][j]);
                total_count++;
            }
            maxr--;
            
            //left wall
            for(int i=maxr, j=minc; i>=minr and total_count<total_ele; i--)
            {
                res.push_back(matrix[i][j]);
                total_count++;
            }
            minc++;
        }
        return res;
    }
};