class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) 
    {
        int n = arr.size();
        
        unordered_set<int> ust(arr.begin(), arr.end());
        
        
        int cnt = 0;
        int max_len = INT_MIN;
        
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int a = arr[i], b = arr[j];
                int c = a + b;
                cnt = 2;
                
                while(ust.find(c) != ust.end())
                {
                    cnt++;
                    a = b;
                    b = c;
                    c = a+b;
                }
                
                max_len = max(max_len , cnt);
            }
        }
        
        if (max_len >= 3)
            return max_len;
        return 0;
               
    }
};