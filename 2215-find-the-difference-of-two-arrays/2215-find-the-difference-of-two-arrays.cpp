class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> st1 , st2;
        for(auto x : nums1)
        {
            st1.insert(x); // 1,2,3
        }
        for(auto it: st1)
        {
            cout<<it<<" ";
        }
        
        for(auto x : nums2)
        {
            st2.insert(x);
        }
        
        for(auto it: st2)
        {
            cout<<it<<" ";
        }
        
        vector<int>n_nums1;
        vector<int>n_nums2;
        vector<vector<int>> res;
        for(auto it : st1)
        {
            if(st2.find(it) == st2.end())
            {
                n_nums1.push_back(it);
            }
        }
        
        for(auto x : st2)
        {
            if(st1.find(x) == st1.end())
            {
                n_nums2.push_back(x);
            }
        }
        
        res.push_back(n_nums1);
        res.push_back(n_nums2);
        return res;
        
    }
};