class Solution {
public:
    
    bool checkPalindrome(string str) {
        int l=0;
        int r= str.size()-1;
        
        while(l <= r) {
            if(str[l] != str[r]) {
                return false;
            }
            else
            {
                l++; r--;
            }
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        
        string str = "";
        for(auto st: words) {
             if(checkPalindrome(st) == true) {
                 str = st;
                 break;
             }
        }
        return str;
    }
};