class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
     unordered_map<char , int> ump;
     for(int i=0; i<s.size(); i++)
     {
         ump[s[i]]++;
     }
        priority_queue<pair<char,int>> pq;
        for(auto it : ump)
        {

            pq.push({it.first, it.second});
        }
            
        string ans = "";
        while(!pq.empty())
        {
            char chr1 = pq.top().first;
            int frq1 = pq.top().second;
            pq.pop();
           // cout<<chr1 <<endl;
           
            
            int times = min(frq1,repeatLimit);
            for(int j=0; j<times; j++)
            {
                ans +=chr1;
            }
            
            frq1 = frq1-times;
            if(frq1>0)
            {
                if(!pq.empty())
                {
                      //second largest
                    char chr2 = pq.top().first;
                    int frq2 = pq.top().second;
                    pq.pop();
                    //add one occurence
                    
                    ans += chr2;
                    
                    pq.push({chr1, frq1});
                    if(frq2-1 > 0)
                    {
                        pq.push({chr2 , frq2-1});
                    } 
                }
                else
                {
                    return ans;
                }
            }
              
        }
        return ans;
    }
};