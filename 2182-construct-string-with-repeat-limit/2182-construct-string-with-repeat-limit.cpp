class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
     int cnt[26] = {0};
     for(auto it:s)
     {
         cnt[it - 'a']++;
     }
        priority_queue<pair<int,int>> pq;
        for(int i=0; i<26; i++)
        {
            if(cnt[i]>0)
            {
            pq.push({i , cnt[i]});
            }
        }
            
        string ans = "";
        while(!pq.empty())
        {
            int chr1 = pq.top().first;
            int frq1 = pq.top().second;
            pq.pop();
           // cout<<chr1 <<endl;
            if(ans.size() == 0 || ans.back() != (char)(chr1 + 'a'))
            {
                int times = min(frq1,repeatLimit);
                for(int j=0; j<times; j++)
                {
                    ans +=(char)(chr1 + 'a');
                }
                frq1 = frq1-times;
                if(frq1)
                {
                    pq.push({chr1,frq1});
                }
            }
            else
            {
                if(pq.size() == 0)
                {
                    break;
                }
                //second largest
                int chr2 = pq.top().first;
                int frq2 = pq.top().second;
                pq.pop();
                //add one occurence
                ans +=(char)(chr2 + 'a');
                frq2--;
                if(frq2)
                {
                    pq.push({chr2,frq2});
                }
                pq.push({chr1,frq1});
            }
        }
        return ans;
    }
};