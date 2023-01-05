class Solution {
public:
    
    bool static compare(const vector<int> &v1, vector<int> &v2)
    {
        return v1[1] < v2[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        // 1. sort the vector based on 2nd element
        
        sort(points.begin(), points.end(), compare);
        int x = points[0][1];
        
        int arrows = 1;
        
        for(int i=1; i<points.size(); i++)
        {
            if(x >= points[i][0] and x<= points[i][1])
            {
                continue; // within the range
            }
            else
            {
                arrows++;
                x = points[i][1];
            }
        }
        return arrows;
    }
};