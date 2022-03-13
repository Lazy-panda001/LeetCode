class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) 
    {
        vector<int> res1;
        
        int n = nums.size();
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == key)
            {
                res1.push_back(i);  // 2,5
            }
        }
        
        for(auto it : res1)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        
        vector<int> res;
        set<int> st;
        
        for(int index=0; index<res1.size(); index++)
        {
            int j = res1[index];
            
           bool flag =false;
            for(int i=0; i<n; i++)
            {
                if(st.find(i) == st.end() and abs(i-j) <= k and nums[j] == key)
                {
                    res.push_back(i);
                    st.insert(i);
                }       
            }
        }
        
        return res;
        
    }
};