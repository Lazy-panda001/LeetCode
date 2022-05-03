class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums1) 
    {
        vector<int> nums2(nums1.size());
        
        for(int i=0; i<nums1.size(); i++)
        {
            nums2[i] = nums1[i];
        }
        
        sort(nums2.begin(), nums2.end());
        
        int start_index=0;
        int end_index = 0;
        
        for(int i=0; i<nums1.size(); i++)
        {
            if(nums1[i] != nums2[i])
            {
                start_index=i;
                break;
            }
        }
        
        for(int j = nums1.size()-1; j>=0; j--)
        {
            if(nums1[j] != nums2[j])
            {
                end_index = j;
                break;
            }
        }
        cout<<start_index<<" "<<end_index<<endl;
        
        if(start_index == 0 and end_index==0)
        {
            return 0;
        }    
        return end_index-start_index + 1;
    }
};