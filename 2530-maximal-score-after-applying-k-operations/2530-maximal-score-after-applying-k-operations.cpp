class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) 
    {
         long long max_scores = 0;
        
        priority_queue<int> maxH;
        
        for(int i=0; i<nums.size(); i++)
        {
            maxH.push(nums[i]);
        }
        
        while(k > 0)
        {
            long long val = maxH.top();
            maxH.pop();
            
            max_scores +=val;
            
            if(val % 3 == 0)
            {
                maxH.push(val / 3);
            }
            else
            {
                int qu = val / 3;
                maxH.push(qu+1);
            }
            
            k--;
        }
        
        return max_scores;

        
    }
};