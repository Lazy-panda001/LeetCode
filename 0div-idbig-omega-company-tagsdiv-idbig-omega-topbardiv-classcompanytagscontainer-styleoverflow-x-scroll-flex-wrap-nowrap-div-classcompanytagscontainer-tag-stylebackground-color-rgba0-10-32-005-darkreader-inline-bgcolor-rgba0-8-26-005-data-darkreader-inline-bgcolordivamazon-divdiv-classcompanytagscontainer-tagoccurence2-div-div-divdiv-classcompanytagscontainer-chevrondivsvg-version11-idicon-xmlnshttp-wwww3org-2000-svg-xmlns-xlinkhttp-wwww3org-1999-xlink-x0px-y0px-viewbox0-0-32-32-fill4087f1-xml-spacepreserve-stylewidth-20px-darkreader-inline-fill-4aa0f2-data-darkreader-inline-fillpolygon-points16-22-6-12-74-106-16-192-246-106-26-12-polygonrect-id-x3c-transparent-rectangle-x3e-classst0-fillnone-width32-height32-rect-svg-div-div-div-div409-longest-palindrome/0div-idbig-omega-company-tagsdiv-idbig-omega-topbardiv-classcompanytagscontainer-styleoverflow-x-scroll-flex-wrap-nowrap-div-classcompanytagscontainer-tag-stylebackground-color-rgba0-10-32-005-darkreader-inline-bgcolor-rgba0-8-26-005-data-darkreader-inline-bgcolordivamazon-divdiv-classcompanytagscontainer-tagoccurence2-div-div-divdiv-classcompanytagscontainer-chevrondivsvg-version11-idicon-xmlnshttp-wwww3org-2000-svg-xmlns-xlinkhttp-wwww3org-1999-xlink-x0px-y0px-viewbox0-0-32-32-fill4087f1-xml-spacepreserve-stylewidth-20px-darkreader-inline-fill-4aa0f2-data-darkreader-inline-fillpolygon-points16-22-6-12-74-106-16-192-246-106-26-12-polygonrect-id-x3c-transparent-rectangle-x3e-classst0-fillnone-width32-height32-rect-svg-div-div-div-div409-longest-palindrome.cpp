class Solution {
public:
    int longestPalindrome(string str) {
        unordered_map<char,int> ump;
        
        int length = 0;
        
        for(int i=0; i<str.size(); i++)
        {
            ump[str[i] - 'a']++;
            if(ump[str[i]-'a'] % 2 == 0)
            {
                length +=ump[str[i] - 'a'];
                ump[str[i] - 'a'] = 0;
            }
            
        }
        
        for(auto itr : ump)
        {
            if(itr.second == 1)
            {
                length++;
                break;
            }
        }
        
        return length;
    }
};