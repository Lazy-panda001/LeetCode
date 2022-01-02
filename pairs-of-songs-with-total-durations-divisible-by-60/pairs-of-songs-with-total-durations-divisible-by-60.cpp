class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        int count=0;
        vector<int> hash(60,0);
        
        for(int i=0; i<time.size(); i++)
        {
            int rem = time[i] % 60;
            
            if(rem == 0)
            {
                count +=hash[0];
            }
            else
                count +=hash[60-rem];
            
        hash[rem]++;
        }
        
        return count;
    }
};