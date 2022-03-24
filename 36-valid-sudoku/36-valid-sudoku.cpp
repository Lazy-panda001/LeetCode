class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_set<string> st;
        
        int r = board.size();
        int c = board[0].size();
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(board[i][j] !='.')
                {
                    int num = board[i][j] - '0';
                    
                    string row_cel =  "row"+ to_string(i)+ to_string(num);
                    string col_cel =  "col"+ to_string(j)+ to_string(num);
                    string box_cel = "box" + to_string(i/3*3+j/3) + to_string(num);
                    
                    if(st.find(row_cel) != st.end() || st.find(col_cel) != st.end() || st.find(box_cel) != st.end())
                    {
                        return false;
                    }
                    st.insert(row_cel);
                    st.insert(col_cel);
                    st.insert(box_cel);
                }
                    
            }
        }
        
        return true;
        
    }
};