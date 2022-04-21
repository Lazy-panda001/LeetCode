class Solution
{
public:
 
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        
        sort(arr2.begin(),arr2.end());
        
        int count = 0;
        
        bool flag = true;
        for(int i=0;i <arr1.size(); i++)
        {
            int low=0;
            int high = arr2.size()-1;
            flag = true;
            while(low<=high)
            {
                int mid = low + (high-low)/2;
                if(abs(arr2[mid] - arr1[i]) <= d)
                {
                    flag = false;
                    break;
                }
                else if (arr2[mid] < arr1[i])
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
            
            if(flag  == true)
                count++;
                
        }
            
            return count;
        }
    
};