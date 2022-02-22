class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) 
    {
        unordered_map<char, int> ump;
        for(int i=0; i<s.size(); i++)
        {
            ump[s[i]]++;
        }
        
        priority_queue<pair<char,int>>maxH;
        
        for(auto it : ump)
        {
            maxH.push({it.first, it.second});
        }
        
        string res="";
        
        while(!maxH.empty())
        {
            char c1 = maxH.top().first;
            int n1 = maxH.top().second;
            maxH.pop();
            
            int len = min(repeatLimit , n1);
            
            for(int i=0; i<len; i++)
            {
                res +=c1;
            }
            
            if(n1-len>0)
            {
                if(!maxH.empty())
                {
                    char c2 = maxH.top().first;
                    int n2 = maxH.top().second;
                    maxH.pop();
                    
                    res +=c2;
                    
                    maxH.push({c1 , n1-len});
                    if(n2-1 > 0)
                    {
                        maxH.push({c2,n2-1});
                    }
                    
                }
                else
                {
                    return res;
                }
                     
            }
        }
        
        return res;
        
    }
};