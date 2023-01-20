class Solution {
public:
    
    void backtrack(vector<int> &nums, int idx, vector<int>&curr, vector<vector<int>>&result) {
        
        if(curr.size() >1) {
            result.push_back(curr);
        }
        
        unordered_set<int> ust;
        
        for(int i=idx; i<nums.size(); i++)
        {
            if((curr.empty() || nums[i] >= curr.back()) && (ust.find(nums[i]) == ust.end())) {
                
                curr.push_back(nums[i]);
                
                backtrack(nums, i+1, curr, result);
                
                curr.pop_back();
                
                ust.insert(nums[i]);
            }
        }
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
       vector<vector<int>> result;
        
        vector<int> curr;
        
        backtrack(nums,0,curr, result);
        
        return result;
    }
};