class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        int last_border = -1;
        
       for(int i=0; i<trips.size(); i++)
       {
           if(trips[i][2] > last_border)
           {
               last_border = trips[i][2];
           }
       }
        
        //cout<<last_border<<endl;
        
        vector<int> highway(last_border+1, 0);
        
        for(int i=0; i<trips.size(); i++)
        {
            highway[trips[i][1]] += trips[i][0];
            highway[trips[i][2]] -= trips[i][0];
        }
        
     /*  for(auto it : highway)
        {
            cout<<it;
        }
        cout<<endl;
       */ 
        int check=0;
        for(int i=0; i<=last_border; i++)
        {
            check += highway[i];
            //cout<<highway[i];
            if(check > capacity)
            {
                return false;
            }
        }
        cout<<endl;
        return true;   
    }
};