class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
      int n = points.size();
      int Manhat_distance = INT_MAX;
      int index = 0;
      for(int i=0; i<n; i++)
      {
        if(x==points[i][0] || y==points[i][1]) // means valid point
        {
          int calculate_distance = abs(x-points[i][0]) + abs(y - points[i][1]);
          if(calculate_distance < Manhat_distance)
          {
            Manhat_distance = calculate_distance;
            index = i;
          }
        }
      }
      if(Manhat_distance == INT_MAX) return -1;
      return index;
        
    }
};