class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
      int i = m-1 ; // pointing to last element in nums1
      int j = n-1; // pointing to last element in nums2;
      int k = m + n -1;  // pointing to stored position in nums1
      
      while(i >=0 and j >=0)
      {
        if(nums1[i] < nums2[j])
        {
          nums1[k] = nums2[j];
          k--;
          j--;
        }
        else
        {
          nums1[k] = nums1[i];
          i--;
          k--;
        }
      }
      // if j brcomes 0
      while(i>=0)
      {
        nums1[k--] = nums1[i--];
      }
      
      // if i becomes 0
      while(j>=0)
      {
        nums1[k--] = nums2[j--];
      }
      
      return;
    }
};