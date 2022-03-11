class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string res="";
        
        int i=0, j=0;
        while(i<word1.size() and j<word2.size())
        {
            res +=word1[i++];
            res+=word2[j++];
        }
        
        if(i<word1.size())
        {
            string temp = word1.substr(i);
            res = res+temp;
            return res;
        }
        else
        {
            string temp = word2.substr(j);
            res = res + temp;
            return res;
        }
    }
};