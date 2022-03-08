class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int n1= s.length();
        int n2 = t.length();
        
        int freq[256] = {0};// it should be big value like = 256
        if(n1 != n2) 
            return false;
        
        for(int i=0; i<n1; i++)
        {
            freq[s[i]]++;
            freq[t[i]]--;
        }
        
        for(int i=0; i<256; i++)
        {
            if(freq[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};