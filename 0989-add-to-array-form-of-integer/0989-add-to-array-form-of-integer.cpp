class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) 
    {
        vector<int> res;
        int carry=0;
        int i = num.size()-1;
        
        while(i>=0 or carry > 0 or k!=0)
        {
            if(k!=0)
            {
                carry += k %10;
                k = k/10;
            }
            
            if(i>=0)
            {
                carry += num[i];
                i--;
            }
            
            res.push_back(carry % 10);
            carry = carry/10;
            
        }
        reverse(res.begin(), res.end());
        return res;
    }
};