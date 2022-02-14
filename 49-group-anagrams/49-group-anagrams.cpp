class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string , vector<string>> ump;
        
        string str="";
        
        for(int i=0; i<strs.size(); i++)
        {
            str = strs[i];
            
            sort(str.begin(), str.end());
            ump[str].push_back(strs[i]);
        }
        
        vector<vector<string>> res;
        
        for(auto it : ump)
        {
            res.push_back(it.second);
        }
        
        return res;
        
    }
};