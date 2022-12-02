class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        if(word1.size() != word2.size())
        {
            return false;
        }
        
        vector<int>vec1(26,0), vec2(26,0), vec11(26,0), vec22(26,0);
        
        for(int i=0; i<word1.size(); i++)
        {
            vec1[word1[i] - 'a']++; // frequency rakhbe word1 er character er
            vec11[word1[i] - 'a'] = 1;
        }
        
        for(int i=0; i<word2.size(); i++)
        {
            vec2[word2[i] - 'a']++;
            vec22[word2[i] - 'a'] = 1;
        }
        
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        
        if((vec1 == vec2) and (vec11 == vec22))
        {
            return true;
        }
        return false;
        
    }
};