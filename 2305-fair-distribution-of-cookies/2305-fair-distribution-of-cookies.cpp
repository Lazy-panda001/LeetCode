class Solution 
{
public:
    int ans = INT_MAX;
    void dfs(vector<int> &cookies, vector<int>&bag, int students, int idx)
    {
        if(idx == cookies.size())
        {
            int max_val = *max_element(bag.begin(), bag.end());
            ans = min(ans,max_val);
            return;
        }
        
        
        
        for(int i=0; i<students; i++)
        {
            bag[i] = bag[i] + cookies[idx];
            dfs(cookies , bag, students, idx+1);
            bag[i] = bag[i] - cookies[idx];
        }
    }
    
    int distributeCookies(vector<int>& cookies, int k) 
    {
        int n = cookies.size();
        vector<int> bag(k,0);
        
        dfs(cookies, bag, k, 0);
        
        return ans;
        
    }
};