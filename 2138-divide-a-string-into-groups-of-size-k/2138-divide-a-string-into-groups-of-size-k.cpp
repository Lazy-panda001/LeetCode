class Solution {
public:
    vector<string> divideString(string str, int k, char fill) 
    {
        int n = str.size();
        vector<string> res;
        
        int i=0;
        while(i < n)
        {
            string temp = str.substr(i,k);
            if(temp.size() ==k)
            {
                res.push_back(temp);
            }
            else if(temp.size() < k)
            {
                int len = temp.size();
                int dif = k-len;
                while(dif--)
                {
                    temp+=fill;
                }
                res.push_back(temp);
                break;
            }
        i=i+k;
        }
        
        return res;
    }
};