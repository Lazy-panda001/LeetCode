class Solution {
public:
    int minPartitions(string n) 
    {
        int res = 0;
        for(int i=0; i<n.size(); i++)
        {
            res = max(n[i]-'0', res);
            
        }
        
        return res;
        
    }
};