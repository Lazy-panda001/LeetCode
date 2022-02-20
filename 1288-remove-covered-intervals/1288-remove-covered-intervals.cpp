class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end());
        
        int count_pairs=1;
        int n = intervals.size();
        
        if(n ==1)
        {
            return 1;
        }
        
        int x = intervals[0][0];
        int y = intervals[0][1];
        
        for(int i=1; i<n; i++)
        {
            if(intervals[i][0]> x and intervals[i][1]>y)
            {
                count_pairs++;
            }
            
            if(intervals[i][1] > y)
            {
                x = intervals[i][0];
                y = intervals[i][1];
            }
            
        }
        return  count_pairs;
        
    }
};