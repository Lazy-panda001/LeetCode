class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        vector<string>res(score.size());
        priority_queue<pair<int,int>> maxH;
        for(int i=0; i<score.size(); i++)
        {
            maxH.push({score[i],i});
        }
        
        int i=0;
        while(maxH.size()!=0)
        {
            if(i==0)
            {
                res[maxH.top().second] = "Gold Medal";
            }
            else if(i==1)
            {
                res[maxH.top().second] = "Silver Medal";
            }
            else if(i==2)
            {
                res[maxH.top().second] = "Bronze Medal";
            }
            else
            {
                res[maxH.top().second] = to_string(i+1);
            }
        i++;
        maxH.pop();
        }
        return res;
    }
};