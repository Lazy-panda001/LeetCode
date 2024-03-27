class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count = 0;
        
        if(k == 0 or k ==1) {
            return count;
         }
        
//         for(int i=0; i<nums.size(); i++) {
//             count++;
            
//             int product = nums[i];
            
//             for(int j=i+1; j<nums.size(); j++) {
                
//                 product = product * nums[j];
//                 cout<<product<<endl;
                
//                 if(product < k) {
//                     count++;
//                 }
//                 else if(product >= k) {
//                     break;
//                 }
//             }
//         }
        
//         return count;
        
        
        int i=0; int j=0;
        
        int product = 1;
        
        while(j<nums.size()) {
            product = product*nums[j];
            
            while(product >=k) {
                product = product / nums[i];
                i++;
            }
            
            if(product < k) {
                count += (j - i +1 ); // count subarray till ending j index
                j++;
            }
        }
        
        return count;
    }
};