class Solution {
public:
     unordered_map<int,int> ump;
  static bool comp(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}
    
    int modify(int num)
    {
        string number ="";
        if(num == 0)
        {
            int val = ump[num];
            return val;
        }
        
        while(num !=0)
        {
            int rem = num % 10;
            num = num / 10;
            int val = ump[rem];
            if(number.size() == 0)
            {
                number = to_string(val);
            }
            else
            {
                number = to_string(val) + number;
            }
        }
        
      
        
        stringstream geek(number);
    int ans = 0;
    geek >> ans;
      
        
        return ans;
       
    }
    
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
    {
       
        for(int i=0; i<mapping.size(); i++)
        {
            ump[i] = mapping[i];
        }
        
        vector<int> res;
        
        vector<pair<int,int>> vec;
        for(int i=0; i<nums.size(); i++)
        {
            int change = modify(nums[i]);
            
            vec.push_back({nums[i] , change});
        }
        
       sort(vec.begin(), vec.end(), comp);
        
        cout<<endl;
        for(auto it : vec)
        {
            res.push_back(it.first);
        }
        cout<<endl;
        
        return res;
        
    }
};