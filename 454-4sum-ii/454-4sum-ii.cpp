class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) 
    {
        unordered_map<int,int>ump;
        int n = nums1.size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int sum = nums1[i] + nums2[j];
                ump[sum]++;
            }
        }
        
        int tuples=0;
        
        for(int k=0; k<n; k++ )
        {
            for(int l=0; l<n; l++)
            {
                int sum = nums3[k] + nums4[l];
                
                if(ump.find(-sum) != ump.end())
                {
                   // tuples += ump[-(nums3[k] + nums4[l])];
                    tuples +=ump[-sum];
                }
            }
        }
        
        return tuples;   
    }
};