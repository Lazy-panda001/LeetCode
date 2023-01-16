class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        vector<vector<int>> res; // for final result
        
        intervals.push_back(newInterval); 
        
        int n = intervals.size(); // find size of intervals initially
        if(n<=1)
        {
            return intervals;
        }
        
        sort(intervals.begin(), intervals.end()); // sort the 2d intervals; so first element wise sort
        
        vector<int> temp = intervals[0]; // first interval
        
        for(auto it : intervals)
        {
            if(temp[1] >= it[0])
            {
                temp[1] = max(temp[1],it[1]);
            }
            // else push initial temp first then take next it as  net temp
            else
            {
                res.push_back(temp);
                temp = it;
            }
        }
        res.push_back(temp);
        return res;
    }
};