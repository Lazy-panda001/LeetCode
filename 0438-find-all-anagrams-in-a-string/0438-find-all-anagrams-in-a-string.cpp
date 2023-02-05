class Solution {
public:
    
    bool anagram(string str1, string str2) {
        
        if(str1.size() != str2.size())
        {
            return false;
        }
        vector<int> freq(26,0);
        
        for(int i=0; i<str1.size(); i++) {
            freq[str1[i] - 'a']++;
            freq[str2[i] - 'a']--;
        }
        
        for(int i=0; i<26; i++) {
            if(freq[i] != 0) {
                return false;
            }
        }
        return true;
    }
    
    vector<int> findAnagrams(string str, string p) {
        
        vector<int> index;
        
        int len = p.size();
        
        for(int i=0; i<str.size(); i++) {
            string temp = str.substr(i,len);
            if(anagram(temp,p) == true) {
                index.push_back(i);
            }
        }
        return index;
    }
};