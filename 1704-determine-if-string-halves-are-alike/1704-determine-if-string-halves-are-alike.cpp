class Solution {
public:
    
    bool checkV(char ch)
    {
        if(ch == 'a' or ch =='e' or ch == 'i' or ch == 'o' or ch == 'u' or 
           ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U')
        {
            return true;
        }
        return false;
    }
    
    int func(string str)
    {
        int count =0;
        
        for(int i=0; i<str.size(); i++)
        {
            if(checkV(str[i]))
            {
                count++;
            }
        }
        
        return count;
    }
    
    bool halvesAreAlike(string s) 
    {
        
        int n = s.size(); // 4 , 8
        
        if(n % 2 !=0)
        {
            return false;
        }
         
        int len = n /2; // 2 . 4 
        
        string a = s.substr(0,len);
        string b = s.substr(a.size(), len);
        
       // cout<<a.size()<<" "<<a<<" "<<b.size()<<" "<<b<<endl;
        
        
        if(func(a) == func(b))
        {
            return true;
        }
        return false;
        
    }
};