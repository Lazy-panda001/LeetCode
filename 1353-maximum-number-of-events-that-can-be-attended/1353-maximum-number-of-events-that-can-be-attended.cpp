class Solution {
public:
    int maxEvents(vector<vector<int>>& events) 
    {
        priority_queue<int, vector<int>, greater<int>> minH;
        
        sort(events.begin(), events.end());
        int n = events.size();
        int i=0;
        int maximum_events = 0;
        int day;
        
        while(minH.size() || i<n)
        {
            if(minH.size() == 0)
                day = events[i][0]; // starting days of that event
            
            while(i<n and events[i][0] == day)
            {
                minH.push(events[i][1]);
                i++;
            }
            
            minH.pop();
            maximum_events++;
            day++;
            
            while(minH.size() > 0 and minH.top() < day)
            {
                minH.pop();
            }
        }
        
        return maximum_events;
        
    }
};