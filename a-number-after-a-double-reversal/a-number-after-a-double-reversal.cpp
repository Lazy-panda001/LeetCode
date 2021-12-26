class Solution {
public:
    bool isSameAfterReversals(int num) 
    {
        
        string str = to_string(num);
        if(str.size() == 1)
        {
            return true;
        }
        
        
        string res = str;
        
        //1st reverse
        reverse(str.begin(), str.end());
        
        string str2 ="";
        
        int i=0; 
        while(i < str.size())
        {
            if(str[i] == '0')
            {
                i++;
            }
            else
            {
                break;
            }
            
        }
        
        str2 = str.substr(i);
        
        reverse(str2.begin(), str2.end());
        
        //cout<<str2<<endl;
        
        if(res == str2)
        {
            return true;
        }
        return false;;
        
        
        
    }
};