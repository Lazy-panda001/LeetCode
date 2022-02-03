class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) 
    {
        int n = nums1.size();
        
        unordered_map<int, int> ump;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int sum = nums1[i] + nums2[j];
                ump[sum]++;
            }
        }
        
        int count_tuples=0;
        
        for(int k=0; k<n; k++)
        {
            for(int l=0;l<n; l++)
            {
                int sum = nums3[k] + nums4[l];
                if(ump.find(-sum) != ump.end())
                {
                    count_tuples += ump[-sum];
                }
            }
        }
        return count_tuples;
        
        
        
    }
};