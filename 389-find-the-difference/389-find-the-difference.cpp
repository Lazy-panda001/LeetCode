class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        string str = s+t;
        cout<<str<<endl;
        
        char single = 0;
        
       for(auto ch : str)
        {
            single = single ^ ch;
        }
        return single;
        
    }
};