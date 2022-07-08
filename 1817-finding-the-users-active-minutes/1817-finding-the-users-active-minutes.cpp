class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) 
    {
        unordered_map<int, unordered_set<int>> ump;
        
        vector<int> res(k+1,0);
        
        for(auto it : logs)
        {
            ump[it[0]].insert(it[1]);
        }
        
        for(auto it : ump)
        {
            int s = it.second.size();
            res[s]++;
            s = 0;
        }
        
        vector<int> ans;
        for(int i=1; i<=k; i++)
        {
            ans.push_back(res[i]);
        }
        return ans;
    }
};