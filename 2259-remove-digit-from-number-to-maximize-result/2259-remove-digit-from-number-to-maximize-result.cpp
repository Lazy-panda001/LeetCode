class Solution {
public:
    string removeDigit(string number, char digit) 
    {
        vector<string> nums;
        int n = number.size();
        
        for(int i=0; i<n; i++)
        {
            if(number[i] == digit)
            {
                string res = number.substr(0, i);
                res  = res + number.substr(i+1, n-i-1);
                nums.push_back(res);
            }
        }
        
        sort(nums.begin(), nums.end());
        return nums[nums.size()-1];
    }
};