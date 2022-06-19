class Solution {
public:
    string greatestLetter(string s) 
    {
        string str="";
        
        for(int i=0; i<s.size()-1; i++)
        { 
            for(int j=i+1; j<s.size(); j++)
            {
                
                if(abs(s[i] - s[j]) == 32)
                {
                    string res ="";
                    
                    if(s[i] > s[j])
                    {
                        res = s[j];
                    }
                    else
                    {
                        res = s[i];
                    }
                    
                    str = max(str,res);
                }
            
            }
            
        }
        
        return str;
        
    }
};