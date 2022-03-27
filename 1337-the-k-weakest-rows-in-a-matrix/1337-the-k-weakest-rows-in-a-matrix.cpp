class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        priority_queue<pi, vector<pi>, greater<pi>> minh;
        
        int row = mat.size();
        int col = mat[0].size();
        
        
        
        for(int i=0; i<row; i++)
        {
            int count_sol=0;
            for(int j=0; j<col; j++)
            {
                if(mat[i][j] == 1)
                    count_sol++;
            }
            minh.push({count_sol,i});
        }
        
       /* while(!minh.empty())
        {
            auto it = minh.top(); minh.pop();
            cout<<it.first<<" "<<it.second<<endl;
            
        }
        cout<<endl;*/
        
        vector<int> res;
         while(k--)
        {
            auto it = minh.top(); minh.pop();
            cout<<it.first<<" "<<it.second<<endl;
             res.push_back(it.second);
        }
        
        
        return res;
        
    }
};