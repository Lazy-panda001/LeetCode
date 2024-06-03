class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        
        int n1 = s.size();
        int n2 = t.size();
        
        while(i < n1 and j < n2) 
        {
            if(s[i] != t[j])
            {
                if(i != n1)
                {
                    i++;
                }
                else
                {
                    break; // khatam answer return karo
                }
            }
            else
            {
                i++; j++;
            }
        }
        
        if(i == n1 and j < n2)
        {
            return n2 - j;
        }
        else if(j == n2 and i < n1) 
        {
            return 0;
        }
        else
            return 0;
        
        
    }
};