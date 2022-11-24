class Solution {
public:
    
    bool dfs(vector<vector<char>>& board, int i, int j,string word, int index)
    {
        // Termination condition
        if(i<0 or i >= board.size() or j<0 or j>= board[0].size() or board[i][j] != word[index])
        {
            return false;
        }
        
        // base case
        if(index == word.size()-1)
        {
            return true;
        }
        
        char ch = board[i][j];
        
        board[i][j] = '*';
        
        if(dfs(board, i+1, j , word, index+1) || 
           dfs(board, i-1, j , word, index+1) ||
           dfs(board, i, j+1 , word, index+1) ||
           dfs(board, i, j-1 , word, index+1)) return true;
        
        
        // backtract
        board[i][j] = ch;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) 
    {
        int row = board.size();
        int col = board[0].size();
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(board[i][j] == word[0])
                {
                    if(dfs(board, i,j,word,0))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
        
    }
};