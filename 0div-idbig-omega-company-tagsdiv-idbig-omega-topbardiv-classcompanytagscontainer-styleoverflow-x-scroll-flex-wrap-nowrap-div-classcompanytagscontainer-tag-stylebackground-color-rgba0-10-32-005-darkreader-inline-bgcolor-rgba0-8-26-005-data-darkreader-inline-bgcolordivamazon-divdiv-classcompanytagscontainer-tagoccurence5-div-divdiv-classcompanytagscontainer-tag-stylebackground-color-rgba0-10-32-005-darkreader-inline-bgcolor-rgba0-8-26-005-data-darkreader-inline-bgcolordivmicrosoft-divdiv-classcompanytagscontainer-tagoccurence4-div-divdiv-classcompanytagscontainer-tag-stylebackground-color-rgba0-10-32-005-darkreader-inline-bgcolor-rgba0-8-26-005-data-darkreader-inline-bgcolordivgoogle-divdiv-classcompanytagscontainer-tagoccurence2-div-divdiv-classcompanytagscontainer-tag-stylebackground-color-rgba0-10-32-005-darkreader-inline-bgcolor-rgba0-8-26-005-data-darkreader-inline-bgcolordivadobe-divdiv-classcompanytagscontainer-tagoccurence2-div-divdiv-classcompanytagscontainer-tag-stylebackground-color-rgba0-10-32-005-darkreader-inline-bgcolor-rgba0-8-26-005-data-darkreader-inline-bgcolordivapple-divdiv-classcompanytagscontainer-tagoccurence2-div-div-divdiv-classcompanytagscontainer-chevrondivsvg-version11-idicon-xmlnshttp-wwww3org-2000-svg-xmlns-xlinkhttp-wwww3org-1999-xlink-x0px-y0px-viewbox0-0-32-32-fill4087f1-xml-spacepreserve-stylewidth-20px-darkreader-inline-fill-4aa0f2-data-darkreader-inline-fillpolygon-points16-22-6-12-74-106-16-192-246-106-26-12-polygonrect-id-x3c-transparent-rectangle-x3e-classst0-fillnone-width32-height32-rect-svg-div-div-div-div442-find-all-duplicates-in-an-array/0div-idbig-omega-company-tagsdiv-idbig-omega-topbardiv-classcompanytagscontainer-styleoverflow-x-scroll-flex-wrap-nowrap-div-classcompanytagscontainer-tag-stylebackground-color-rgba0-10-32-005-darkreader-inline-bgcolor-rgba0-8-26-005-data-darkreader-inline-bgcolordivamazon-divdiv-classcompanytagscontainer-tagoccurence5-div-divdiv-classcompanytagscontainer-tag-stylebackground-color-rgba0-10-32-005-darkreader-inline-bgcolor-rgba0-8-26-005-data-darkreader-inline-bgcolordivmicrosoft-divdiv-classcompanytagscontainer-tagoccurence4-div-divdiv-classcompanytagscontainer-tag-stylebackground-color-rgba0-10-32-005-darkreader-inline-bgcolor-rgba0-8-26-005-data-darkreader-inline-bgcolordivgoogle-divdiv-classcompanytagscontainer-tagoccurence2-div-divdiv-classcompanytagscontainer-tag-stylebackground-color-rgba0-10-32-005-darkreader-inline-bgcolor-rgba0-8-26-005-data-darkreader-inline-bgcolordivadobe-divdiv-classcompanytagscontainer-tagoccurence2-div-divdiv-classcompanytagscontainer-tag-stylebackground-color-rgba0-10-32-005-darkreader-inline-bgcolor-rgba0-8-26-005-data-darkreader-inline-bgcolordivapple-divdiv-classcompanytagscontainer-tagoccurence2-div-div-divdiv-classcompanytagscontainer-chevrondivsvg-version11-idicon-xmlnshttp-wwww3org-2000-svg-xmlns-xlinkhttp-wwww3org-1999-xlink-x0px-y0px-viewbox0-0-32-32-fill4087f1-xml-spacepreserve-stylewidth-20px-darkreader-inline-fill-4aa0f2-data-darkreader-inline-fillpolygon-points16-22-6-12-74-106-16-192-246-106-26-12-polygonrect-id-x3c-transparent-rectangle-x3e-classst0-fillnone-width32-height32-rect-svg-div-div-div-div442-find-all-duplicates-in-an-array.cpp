class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        
        unordered_map<int,int> ump;
         
        for(int i=0; i<nums.size(); i++) {
            ump[nums[i]]++;
        }
        
        for(auto val : ump) {
            if(val.second >1) {
                res.push_back(val.first);
            }
        }
        return res;
    }
};