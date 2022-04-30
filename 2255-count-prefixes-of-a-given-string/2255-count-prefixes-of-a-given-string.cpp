class Solution {
public:
    
    bool is_prefix(string str1 , string str2)
    {
        int i=0;
        int j=0;
       if(str1.size() > str2.size()) 
        {
            return false;
        }
        while(i<str1.size() and j<str2.size())
        {
            if(str1[i] == str2[j])
            {
                i++;
                j++;
            }
            else
                return false;
        }
        return true;
    }
    
    int countPrefixes(vector<string>& words, string str) 
    {
        int count=0;
        for(int i=0; i<words.size(); i++)
        {
            if(is_prefix(words[i] , str) == true)
            {
                cout<<words[i]<<endl;
                count++;
            }
        }
        
        return count;
    }
};