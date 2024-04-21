class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> upper(26,0);
        vector<int> lower(26,0);
        
        for(int i=0; i<word.size(); i++) {
            if(word[i] >= 'A' and word[i] <='Z') {
                upper[word[i] - 'A'] = 1;
            }
            else if(word[i] >= 'a' and word[i] <='z') {
                lower[word[i] - 'a'] = 1;
            }
        }
        
        int ans = 0;
        
        for(int i=0; i<26; i++) {
            if(lower[i] == upper[i] and lower[i] == 1) {
                ans++;
            }
        }
        return ans;
    }
};