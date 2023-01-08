class Solution {
public:
   
int maxPoints(vector<vector<int>>& points) 
{
  // Edge case: Less than 3 points
  if (points.size() < 3) 
  {
    return points.size();
  }

  // Initialize maximum number of points on the same line
  int max_points = 0;

  // Iterate through every pair of points
  for (int i = 0; i < points.size(); i++) 
  {
    // Initialize map to store slope of the line formed by points[i] and other points
    unordered_map<string, int> slope_count;
    // Initialize count of points with the same x-coordinate as points[i]
    int same_x_count = 1;
    // Initialize maximum number of points on the same line with point i
    int local_max = 0;
    for (int j = i+1; j < points.size(); j++) {
      // Check if points[i] and points[j] have the same x-coordinate
      if (points[i][0] == points[j][0]) {
        // Increase count of points with the same x-coordinate as points[i]
        same_x_count++;
      } else {
        // Calculate slope of the line formed by points[i] and points[j]
        int y_diff = points[j][1] - points[i][1];
        int x_diff = points[j][0] - points[i][0];
        int gcd = __gcd(y_diff, x_diff);
        y_diff /= gcd;
        x_diff /= gcd;
        // Convert slope to string
        string slope = to_string(y_diff) + "/" + to_string(x_diff);
        // Increase count of points with the same slope
        slope_count[slope]++;
      }
    }
    // Update maximum number of points on the same line with point i
    local_max = same_x_count;
    for (auto& kv : slope_count) {
      local_max = max(local_max, kv.second + 1);
    }
    // Update global maximum number of points on the same line
    max_points = max(max_points, local_max);
  }

  return max_points;
}
};