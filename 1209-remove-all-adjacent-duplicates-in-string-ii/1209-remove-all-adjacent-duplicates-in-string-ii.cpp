class Solution {
public:
    string removeDuplicates(string str, int k) 
    {
        stack<pair<char,int>> stk;
        string ans="";
        //if(k==1)return ans;
        
        for(int i=0; i<str.size(); i++)
        {
            if(stk.size() == 0)
            {
                stk.push({str[i] , 1});
            }
            
            else if(stk.top().first != str[i])
            {
                stk.push({str[i] , 1});
            }
            
            else if(stk.top().first == str[i])
            {
                stk.push({str[i] , stk.top().second + 1});
                
                if( k == stk.top().second)
                {
                    int x = k;
                    while(x--)
                    {
                        stk.pop();
                    }
                    
                }
            }
        }
        
        
        while(!stk.empty())
        {
            ans +=stk.top().first;
            stk.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};