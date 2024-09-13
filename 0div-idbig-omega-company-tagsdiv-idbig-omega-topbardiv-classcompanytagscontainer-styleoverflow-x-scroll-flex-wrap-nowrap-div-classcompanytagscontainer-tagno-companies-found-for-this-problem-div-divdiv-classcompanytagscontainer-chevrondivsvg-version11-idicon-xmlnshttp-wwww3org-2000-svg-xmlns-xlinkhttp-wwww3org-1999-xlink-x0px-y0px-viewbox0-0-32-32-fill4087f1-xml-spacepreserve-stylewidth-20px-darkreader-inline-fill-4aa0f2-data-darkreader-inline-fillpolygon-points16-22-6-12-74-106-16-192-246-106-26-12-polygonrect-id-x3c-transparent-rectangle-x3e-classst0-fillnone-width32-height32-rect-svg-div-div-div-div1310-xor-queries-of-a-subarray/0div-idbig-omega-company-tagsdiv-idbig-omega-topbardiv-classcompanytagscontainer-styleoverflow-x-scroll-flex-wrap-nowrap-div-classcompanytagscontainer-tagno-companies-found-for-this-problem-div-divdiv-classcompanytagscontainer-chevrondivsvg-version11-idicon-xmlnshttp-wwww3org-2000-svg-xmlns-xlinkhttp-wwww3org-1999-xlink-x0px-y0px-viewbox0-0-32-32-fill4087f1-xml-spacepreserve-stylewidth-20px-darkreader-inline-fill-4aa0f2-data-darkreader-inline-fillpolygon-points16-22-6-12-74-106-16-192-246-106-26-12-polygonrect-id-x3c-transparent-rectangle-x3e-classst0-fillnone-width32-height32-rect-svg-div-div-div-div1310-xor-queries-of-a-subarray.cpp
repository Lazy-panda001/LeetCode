class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int> pXor(arr.size(),0);
        
        pXor[0] = arr[0];
        
        for(int i=1; i<arr.size(); i++)
        {
            pXor[i] = pXor[i-1] xor arr[i];
        }
        
        vector<int> result;
        for(vector<int>& query : queries) {
            int L = query[0];
            int R = query[1];
            
            int xor_val = pXor[R] xor (L == 0 ? 0 : pXor[L-1]);
            
            result.push_back(xor_val);
        }
        
        return result;
    }
};