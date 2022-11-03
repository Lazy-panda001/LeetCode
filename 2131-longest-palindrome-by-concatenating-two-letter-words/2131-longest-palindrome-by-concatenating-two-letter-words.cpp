class Solution {
public:
    int longestPalindrome(vector<string>& words) 
    {
        map<string,int> ump;
        
        for(int i=0; i<words.size(); i++)
        {
            ump[words[i]]++;
        }
        
        int ans = 0;
        
        bool flag = false;
        
        int len=0;
        
        for(auto x : ump)
        {
            if(x.first[0] == x.first[1])
            {
                if(x.second % 2 == 1)
                {
                    flag = true;
                    len += (x.second - 1);
                }
                else
                {
                    len += ump[x.first];
                   
                }
                 ump.erase(x.first);
            }
            else
            {
                string str = x.first;
                reverse(str.begin(), str.end());
                if(ump.find(str) != ump.end())
                {
                    ans += min(x.second, ump[str])*4;
                }
                ump.erase(str);
                ump.erase(x.first);
            }
        }
        
        if(flag == true)
        {
            return ans + len*2 + 2;
        }
        else
            return ans + len*2;
       
    }
};