class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string , vector<string>> ump;
        
        string str="";
        
        for(int i=0; i<strs.size(); i++)
        {
            str = strs[i];
            
            sort(strs[i].begin(), strs[i].end());
            ump[strs[i]].push_back(str);
        }
        
        vector<vector<string>> res;
        
        for(auto it : ump)
        {
            res.push_back(it.second);
        }
        
        return res;
        
    }
};