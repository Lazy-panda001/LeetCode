class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int n = num.size();
        string str="";
        
        if(n < 3)
            return str;
        
        for(int i=0; i<=n-3; i++)
        {
            string res ="";
            
            if(num[i] == num[i+1] and num[i+1] == num[i+2])
            {
                res.push_back(num[i]);
                res.push_back(num[i+1]);
                res.push_back(num[i+2]);
                
                if(str < res)
                {
                    str = res;
                }
            }
            
        }
        
        return str;
        
    }
};