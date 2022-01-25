class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int n= arr.size();
        if(n <3)
        {
            return false;
        }
        
        int i=0;
        while(i+1<n and arr[i] < arr[i+1])
        {
            i++;
        }
        
        if(i == 0 or i == n-1)
        {
            return false;
        }
        
        while(i+1<n and arr[i] > arr[i+1])
        {
            i++;
        }
        
        if(i==n-1)
        {
            return true;
        }
        return false;
        
    }
};