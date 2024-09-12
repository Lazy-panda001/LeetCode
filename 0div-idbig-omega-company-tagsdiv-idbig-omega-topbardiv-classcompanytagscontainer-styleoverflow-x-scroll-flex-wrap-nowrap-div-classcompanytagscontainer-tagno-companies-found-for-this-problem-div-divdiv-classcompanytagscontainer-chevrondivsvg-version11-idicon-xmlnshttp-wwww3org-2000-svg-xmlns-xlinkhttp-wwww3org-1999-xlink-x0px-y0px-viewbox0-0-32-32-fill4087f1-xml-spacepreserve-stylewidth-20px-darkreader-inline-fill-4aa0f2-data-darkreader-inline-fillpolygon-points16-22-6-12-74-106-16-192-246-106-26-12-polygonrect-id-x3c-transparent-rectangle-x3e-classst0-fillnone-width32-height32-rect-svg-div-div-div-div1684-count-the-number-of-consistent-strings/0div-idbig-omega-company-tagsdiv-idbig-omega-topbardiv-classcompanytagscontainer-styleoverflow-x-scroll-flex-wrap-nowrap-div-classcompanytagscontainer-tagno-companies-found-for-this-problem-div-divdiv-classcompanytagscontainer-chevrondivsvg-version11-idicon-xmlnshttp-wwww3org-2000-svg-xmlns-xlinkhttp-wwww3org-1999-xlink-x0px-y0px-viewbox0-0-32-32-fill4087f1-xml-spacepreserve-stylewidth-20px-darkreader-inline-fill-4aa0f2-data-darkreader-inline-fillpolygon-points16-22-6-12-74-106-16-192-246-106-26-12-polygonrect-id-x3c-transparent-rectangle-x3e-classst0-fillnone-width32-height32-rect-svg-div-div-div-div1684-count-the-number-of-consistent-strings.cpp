class Solution {
public:
    unordered_set<char> ust;
    
    bool check(string str)
    {
        for(int i=0; i<str.size();i++)
        {
            if(ust.find(str[i]) == ust.end())
            {
                return false;
            }
        }
        return true;
    }
        
    
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        
        for(int i=0; i<allowed.size(); i++)
        {
            ust.insert(allowed[i]);
        }
        
        int count = 0;
        
        for(int i=0; i<words.size(); i++)
        {
            if(check(words[i]) == true)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        return count;
    }
};