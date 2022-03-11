class Solution {
public:
    string reverseStr(string s, int k) 
    {
        if(s.size() <= k)
        {
            reverse(s.begin(), s.end());
            return s;
        }
        
        int j=0;
        while(j< s.size())
        {
            if(j+k < s.size())
                reverse(s.begin()+j , s.begin()+j+k);
            else
                reverse(s.begin()+j, s.end());
            
            j = j+2*k;
        }
        return s;
    }
};