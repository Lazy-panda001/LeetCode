// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxEvents(int start[], int end[], int n) 
    {
        // code here
        vector<pair<int,int>> events(n);
        
        for(int i=0; i<n; i++)
        {
            events[i].first = start[i];
            events[i].second = end[i];
        }
        
        sort(events.begin(), events.end());
        priority_queue<int, vector<int> , greater<int>> minH;
    
        int i=0;
        int maximum_events = 0;
        int day;
        
        while(minH.size() || i<n)
        {
            if(minH.size() == 0)
                day = events[i].first; // starting days of that event
            
            while(i<n and events[i].first == day)
            {
                minH.push(events[i].second);
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

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];

        Solution ob;
        cout << ob.maxEvents(start,end,N) << endl;
    }
    return 0;
}  // } Driver Code Ends