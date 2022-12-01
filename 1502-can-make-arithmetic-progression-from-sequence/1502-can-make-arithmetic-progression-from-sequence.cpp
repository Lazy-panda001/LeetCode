class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        
        if(arr.size() < 2)
        {
            return false;
        }
        
        sort(arr.begin(), arr.end());
        
        int am = abs(arr[1] - arr[0]);
        
        for(int i=0; i<arr.size() -1; i++)
        {
            if(abs(arr[i] - arr[i+1]) != am)
               {
                   return false;
               }
        }
        
        return true;
               
               
               
        
        
        
    }
};