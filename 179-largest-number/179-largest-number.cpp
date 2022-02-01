class Solution {
public:
   static bool compare(string s1 , string s2)
    {
        return (s1+s2) > (s2+s1);
    }
    
    string largestNumber(vector<int>& nums) 
    {
        int n = nums.size();
        
        int count=0;
        
        for(int i=0; i<n; i++)
        {
            if(nums[i] == 0)
            {
                count++;
            }
        }
        
        if(count == n)
        {
            return "0";
        }
        vector<string> str(n,"");
        
        for(int i=0; i<n; i++)
        {
            str[i] = to_string(nums[i]);
        }
        
        sort(str.begin() , str.end(), compare);
        
        string res="";
        
        for(auto it:str)
        {
            res +=it;
        }
        
        return res;
        
    }
};