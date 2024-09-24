class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> ust;
        
        for(auto val : arr1) {
            while(ust.find(val) == ust.end() and val >0) {
                ust.insert(val);
                val = val / 10;
            }
        }
        
        int result = 0;
        
        for(auto num : arr2) {
            while(ust.find(num) == ust.end() and num > 0) {
                num = num / 10;
            }
            
            if(num > 0)
                result = max(result, static_cast<int>(log10(num)) + 1);
        }
        return result;
    }
};