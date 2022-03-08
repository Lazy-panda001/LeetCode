class Solution {
public:
    string reverseWords(string str) 
    {
        int n = str.size();
        
        string res="";
        
        int i=0;
        while(i<n)
        {
            // take care if there any space
            if(str[i] == ' ')
            {
                while(i<n and str[i] == ' ')
                {
                    i++;
                }
                if(i == n)
                {
                    break; // no string left
                }
            }
            
            // means i will point to some character of a string
            string temp ="";
            
            while(i<n and str[i] != ' ')
            {
                temp +=str[i++];
            }
            
            if(res.size() == 0)
            {
                res = temp;
            }
            else
            {
                res = temp + " " + res;
            }
        }
        
        return res;
        
    }
};