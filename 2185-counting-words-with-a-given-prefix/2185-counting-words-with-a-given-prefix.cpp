class Solution {
public:
    
    bool check(string str1, string str2)
    {
        int i=0, j=0;
        while(i<str1.size() and j<str2.size())
        {
            if(str1[i] != str2[j])
            {
                if( j < str2.size())
                {
                    return false;
                }
            }
            i++;j++;
        }
        if(j == str2.size())
            return true;
        else
            return false;
    }
    
    int prefixCount(vector<string>& words, string pref) 
    {
        int count=0;
        
        for(int i=0; i<words.size(); i++)
        {
            if(check(words[i], pref) == true)
            {
                count++;
            }
        }
        return count;
        
    }
};