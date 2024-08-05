class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> ump;
        
        for(int i=0; i<arr.size(); i++)
        {
            ump[arr[i]]++;
        }
        
        for(auto str: arr)
        {
            if(ump[str] == 1 and --k == 0)
            {
                return str;
            }
        }
        return "";
    }
};