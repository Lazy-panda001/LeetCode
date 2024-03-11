class Solution {
public:
    string customSortString(string order, string str) {
        string res ="";
        
        map<char,int> mp;
        for(auto s : str) {
            mp[s]++;
        }
        
        for(auto temp : order) {
            if(mp.find(temp) != mp.end()) {
                auto val = mp.find(temp);
                int count = val->second;
                
                string s(count,temp);
                res +=s;
                mp.erase(temp);
            }
        }
        
        for(auto x : mp) {
            string s(x.second,x.first);
            res+=s;
        }
        return res;
    }
};