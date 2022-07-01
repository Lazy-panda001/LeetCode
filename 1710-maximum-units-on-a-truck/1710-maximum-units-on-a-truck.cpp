class Solution {
public:
    
   static bool compare(vector<int> v1 , vector<int> v2)
    {
        return v1[1] > v2[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        int total_unit = 0;
        int i=0;
        
        sort(boxTypes.begin(), boxTypes.end(), compare);
        
        
        while(truckSize >0 and i < boxTypes.size())
        {
            if(boxTypes[i][0] <= truckSize)
            {
                total_unit += boxTypes[i][0] * boxTypes[i][1];
                truckSize -=boxTypes[i][0];
            }
            else
            {
                int take = truckSize;
                truckSize =0;
                total_unit += take*boxTypes[i][1];
            }
            i++;
        }
        return total_unit;
        
    }
};