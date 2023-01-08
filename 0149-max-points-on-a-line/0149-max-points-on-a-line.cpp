class Solution {
public:
    int maxPoints(vector<vector<int>>& points) 
    {
        int ans = 1;
        
        for(int i=0; i<points.size()-1; i++)
        {
            // map<slope,points>
            unordered_map<double,int> ump;
            
            for(int j=i+1; j<points.size(); j++)
            {
                if(points[i][0] == points[j][0])
                {
                    ump[1000001]++;
                }
                else
                {
                    double slope = (double)(points[j][1] - points[i][1]) / (double)(points[j][0] - points[i][0]);
                    
                    ump[slope]++;
                }
            }
            
            int temp = 0;
            
            for(auto val : ump)
            {
                 temp = max(temp,val.second);
            }
            
            ans = max(ans,temp+1);
        }
        
        return ans;
        
    }
};