class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        if(arr.size() != target.size())
        {
            return false;
        }
        
        unordered_set<int> ust;
        for(int i=0; i<arr.size(); i++)
        {
            ust.insert(target[i]);    
        }
        
        for(auto it : arr)
        {
            if(ust.find(it) == ust.end())
            {
                return false;
            }
        }
        
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<target.size(); i++)
        {
            if(target[i] != arr[i])
            {
                return false;
            }
        }
        return true;
        
    }
};