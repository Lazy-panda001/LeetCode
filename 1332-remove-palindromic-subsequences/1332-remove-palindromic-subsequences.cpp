class Solution {
public:
    int removePalindromeSub(string s) 
    {
        int n = s.size();
        if(n == 0)
            return 0;
        bool flag =1;
        int low=0, high = n-1;
        while(low < high)
        {
            if(s[low] != s[high])
            {
                flag = 0;
                break;
            }
            
            low++;
            high--;
        }
        
        if(flag == 0)
            return 2;
        return 1;
            
        
    }
};