class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        string str = s+t;  // make a single string
        
        // now in str mostly all character repeat twice except one character and that it the answer
        cout<<str<<endl;
        
        char single = 0;
        
       for(auto ch : str)   // now simple traverse and find XOR (for finding single character)
        {
            single = single ^ ch;
        }
        return single;
        
    }
};