class Solution {
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int> ump;
        int length = 0;
        for(int i=0; i<s.size(); i++)
        {
            ump[s[i]]++;
            if(ump[s[i]] % 2 == 0)
            {
                length += ump[s[i]];
                ump[s[i]] = 0;
            }
        }
        
        for(auto it : ump)
        {
            if(it.second == 1)  
            {
                length++;
                break;
            }
             
            
        }
        
        return length;
        
    }
};