class Solution {
public:
    int repeatedStringMatch(string a, string b) 
    {
        string str ="";
        int count=0;
        while(str.size() < b.size())
        {
            str +=a;
            count++;
        }
        
        if(str.find(b) != string::npos) // same size wala issue
        {
            return count;
        }
        
        str +=a;
        count++;
        
        if(str.find(b) != string::npos)
        {
            return count;
        }
        return -1;
        
    }
};