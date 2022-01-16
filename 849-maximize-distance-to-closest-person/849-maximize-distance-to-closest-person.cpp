class Solution {
public:
    int maxDistToClosest(vector<int>& seats) 
    {
        
        // case : 1 ------>  [1,0,0,0,1,0,1]
        int result =0; // count maximum consecutive zeros
        int count_0 =0;
        for(int i=0; i<seats.size(); i++)
        {
            if(seats[i] == 0)
            {
                count_0++;
                result = max(result , count_0);
            }
            else // seats[i] == 1
            {
                count_0=0;
            }
        }
        
        // case : 2 ------>  [1,0,0,0,0,0,0,0,0,0,0]
        
        int right =0;
        for(int i=seats.size()-1; i>=0; i--)
        {
            if(seats[i] == 0)
            {
                right++;
            }
            else // seats[i] == 1
            {
                break;
            }
        }
        
        
        // case : 3 ------> [0,0,0,0,0,0,0,0,0,1]
        int left=0;
        for(int i=0; i<seats.size(); i++)
        {
            if(seats[i] == 0)
            {
                left++;
            }
            else //seats[i] == 1
            {
                break;
            }
        }
        
        int final_answer = (result+1)/2;  // Alex will seat in middle
        final_answer = max({final_answer , left , right});
        return final_answer;
    }
};