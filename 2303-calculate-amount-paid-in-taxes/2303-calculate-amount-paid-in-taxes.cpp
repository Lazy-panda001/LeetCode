class Solution {
public:
    double calculateTax(vector<vector<int>>& brack, int income) 
    {
        double ans = 0;
        int n = brack.size();
        
      
        int p =0;
        
       for(auto it : brack)
       {
           
           if(income <= it[0])
           {
               ans +=(double)(income - p)*(it[1] / 100.0);
               break;
           }
           
          
        ans +=(double)(it[0] - p) * (it[1] / 100.0);
        p = it[0];
          
       }
        
        return ans;
        
    }
};