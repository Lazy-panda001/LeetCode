class Solution {
public:
    string reverseWords(string str) 
    {
        string res="";
        
        int n = str.size();
        
        int i=0;
        
        while(i < n)
        {
            if(str[i] == ' ')
            {
                while(i<n and str[i] ==' ')
                {
                    i++;
                }
                
                if(i == n)
                {
                    break;
                }
            }
            
            // now i is pointing some character
            string temp="";
            while(i<n and str[i] != ' ')
            {
                temp +=str[i];
                i++;
            }
            
            if(res.size() == 0)
            {
                res = temp;
            }
            
            else
                res = temp + ' ' + res;
               
        }
        
        return res;
        
    }
};