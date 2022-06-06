class Solution 
{
public:
    string find(string str)
    {
        int val=0;
        for(int i=0; i<str.size(); i++)
        {
            val += (str[i]-'0');
        }
        return to_string(val);
    }
    
    string digitSum(string s, int k) 
    {
        while(s.size() > k)
        {
            string str ="";
        
            for(int i=0; i<s.size(); i=i+k )
            {
                str += find(s.substr(i,k));
            }
        
            s = str;
        } 
        return s;
    }
};