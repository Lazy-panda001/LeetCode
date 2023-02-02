class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        unordered_map<char,int> ump;
        
        for(int i=0; i<order.size(); i++) {
            ump[order[i]] = i;
        }
        
        for(int i=0; i<words.size() -1; i++) {
            string w1 = words[i];
            string w2 = words[i+1];
            
            int n = min(w1.size(), w2.size());
            
            for(int j=0; j<n; j++) {
                if(ump[w1[j]] < ump[w2[j]]) {
                    break;
                }
                if(ump[w1[j]] > ump[w2[j]]) {
                    return false;
                }
                if(j == n-1 and w1.size() > w2.size()) {
                    return false;
                }
            }
        }
        return true;
    }
};