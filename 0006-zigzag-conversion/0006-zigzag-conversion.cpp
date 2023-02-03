class Solution {
public:
    string convert(string s, int numRows) 
    {
        if(numRows == 1)
        {
            return s;
        }
        
        vector<string> nums(numRows);
        bool flag = false;
        int j=0;
        for(int i=0; i<s.size(); i++)
        {
            nums[j].push_back(s[i]);
            
            if(j == numRows - 1)
            {
                flag = false;;
            }
            if(j == 0)
            {
                flag=true;
            }
            if(flag == true)
            {
                j++;
            }
            else
                j--;
        }
        
        string res="";
        for(auto x:nums)
        {
            res +=x;
        }
        return res;
        
    }
};