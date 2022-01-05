class Solution {
public:
    
    bool isPalindrome(string str)
    {
        int i=0; 
        int j = str.size()-1;
        
        while( i <= j)
        {
            if(str[i] != str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
    
    
    
    void func(string str, vector<vector<string>> &res , vector<string> &ans)
    {
        if(str.size() == 0)
        {
            res.push_back(ans);
            return;
        }
        
        for(int i=0; i<str.size(); i++)
        {
            string prefix = str.substr(0,i+1);
            string left = str.substr(i+1);
            
            if(isPalindrome(prefix))
            {
                ans.push_back(prefix);
                func(left , res , ans);
                ans.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> res;
        vector<string> ans;
        func(s, res, ans);
        
        return res;
    }
    
    
};