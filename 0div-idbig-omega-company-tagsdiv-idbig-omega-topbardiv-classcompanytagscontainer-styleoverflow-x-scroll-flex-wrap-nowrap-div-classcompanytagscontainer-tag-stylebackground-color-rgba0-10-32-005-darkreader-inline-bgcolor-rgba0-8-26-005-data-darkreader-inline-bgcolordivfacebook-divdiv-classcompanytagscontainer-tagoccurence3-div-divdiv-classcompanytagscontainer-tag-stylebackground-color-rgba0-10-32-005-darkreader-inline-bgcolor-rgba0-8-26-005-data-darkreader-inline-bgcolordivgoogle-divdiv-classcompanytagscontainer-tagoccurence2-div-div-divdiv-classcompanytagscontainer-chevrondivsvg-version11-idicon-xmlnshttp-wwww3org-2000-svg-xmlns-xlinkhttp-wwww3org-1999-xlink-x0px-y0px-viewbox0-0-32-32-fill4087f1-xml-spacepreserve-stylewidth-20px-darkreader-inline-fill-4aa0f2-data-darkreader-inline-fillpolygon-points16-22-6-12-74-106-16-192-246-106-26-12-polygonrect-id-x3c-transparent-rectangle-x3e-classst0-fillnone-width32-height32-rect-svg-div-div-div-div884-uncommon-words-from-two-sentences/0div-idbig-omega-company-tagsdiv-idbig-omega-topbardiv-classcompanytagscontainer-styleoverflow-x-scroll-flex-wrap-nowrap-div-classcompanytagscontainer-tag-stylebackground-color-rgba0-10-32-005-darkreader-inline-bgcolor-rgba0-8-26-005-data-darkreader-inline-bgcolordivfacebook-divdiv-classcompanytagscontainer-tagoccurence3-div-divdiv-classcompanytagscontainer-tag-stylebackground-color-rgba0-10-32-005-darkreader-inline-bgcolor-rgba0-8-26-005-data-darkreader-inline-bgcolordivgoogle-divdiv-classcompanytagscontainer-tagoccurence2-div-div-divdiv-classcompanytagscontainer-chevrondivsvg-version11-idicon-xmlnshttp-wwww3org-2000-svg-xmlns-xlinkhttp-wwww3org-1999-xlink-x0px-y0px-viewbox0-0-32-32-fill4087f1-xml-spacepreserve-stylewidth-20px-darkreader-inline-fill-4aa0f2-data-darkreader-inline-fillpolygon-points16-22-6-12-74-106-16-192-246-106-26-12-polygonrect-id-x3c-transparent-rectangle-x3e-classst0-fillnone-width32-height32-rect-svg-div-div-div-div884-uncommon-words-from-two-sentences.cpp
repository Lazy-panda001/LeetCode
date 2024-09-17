class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> ump;
        
        string str = "";
        for(int i=0; i<s1.size(); i++) {
            
            if(s1[i] != ' ') {
                str +=s1[i]; 
            }
            else {
                ump[str]++;
                str="";
            }
        }
        ump[str]++;
        
        string str2 ="";
        
        for(int i=0; i<s2.size(); i++) {
            
            if(s2[i] != ' ') {
                str2 +=s2[i]; 
            }
            else {
                ump[str2]++;
                str2="";
            }
        }
        ump[str2]++;
        
        
        vector<string>result;
        
        for(auto itr : ump) {
            if(itr.second == 1) {
                result.push_back(itr.first);
            }
        }
        
        return result;
        
        
    }
};