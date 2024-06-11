class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        for(int i=0; i<arr1.size(); i++)
        {
            mp[arr1[i]]++;
        }
        
        
        int i=0;
        
        for(auto &num : arr2)
        {
            while(mp[num]-->0)
            {
                arr1[i++]=num;
            }
        }
        
        for(auto &itr : mp)
        {
            int val = itr.second;
            while(val-- >0)
            {
                arr1[i++]=itr.first;
            }
        }
        return arr1;
    }
};