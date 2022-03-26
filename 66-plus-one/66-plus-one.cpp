class Solution {
public:
    vector<int> plusOne(vector<int>& nums) 
    {
        vector<int> res;
        int n = nums.size();
        int sum = ( nums[n-1] + 1 ) % 10;
        int carry = ( nums[n-1] + 1) / 10;
        
        res.push_back(sum);
        
        for(int i=n-2; i>=0; i--)
        {
            sum = (nums[i] + carry) % 10;
            carry = (nums[i] + carry) / 10 ;
            
            res.push_back(sum);
        }
        
        
        if(carry != 0)
            res.push_back(carry);
        
        reverse(res.begin(), res.end());
        return res;
        
    }
};