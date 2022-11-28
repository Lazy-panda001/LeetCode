class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        vector<int> looser;
        vector<int> winner;
        
        unordered_map<int,int> ump;
        
        for(auto it : matches)
        {
            ump[it[1]]++;
        }
        
        for(int i=0; i< matches.size(); i++)
        {
            if(ump[matches[i][1]] == 1) // loose by 1 player
            {
                looser.push_back(matches[i][1]);
            }
            
            if(ump.find(matches[i][0]) == ump.end()) // winner
            {
                winner.push_back(matches[i][0]);
                ump[matches[i][0]] = 2;
            }
        }
        
        sort(looser.begin(), looser.end());
        sort(winner.begin(), winner.end());
        
        return {winner , looser};
        
        
    }
};