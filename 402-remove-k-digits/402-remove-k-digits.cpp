class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        if( k == 0)
        {
            return num;
        }
        
        if(num.size() == k)
        {
            return "0";
        }
        
        stack<char> stk;
        
        for(int i=0; i<num.size(); i++)
        {
            while(k>0 and stk.size()>0 and stk.top() > num[i])
            {
                k--;
                stk.pop();
            }
            
            stk.push(num[i]);
        }
        
        while(k>0 and stk.size()>0)
        {
            k--;
            stk.pop();
        }
        
        // sab element aa gaye..so string banao
        string str = "";
        
        while(!stk.empty())
        {
            str.push_back(stk.top()); stk.pop();
        }
        
        reverse(str.begin(), str.end());
        
        int d=0;
        int len = str.size();
        while(d<str.size())
        {
            if(str[d] == '0')
            {
                d++;
            }
            else
            {
                break;
            }
        }
        
        if(d == len)
        {
            return "0";
        }
        string ans = str.substr(d);
        
            
        return ans;
    }
};