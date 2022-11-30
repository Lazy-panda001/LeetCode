class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int> ump;
        
        for(int i=0; i<arr.size(); i++)
        {
            ump[arr[i]]++;
        }
        
        unordered_set<int> ust;
        
        for(auto it : ump)
        {
            if(ust.count(it.second))
            {
                return false;
            }
            else
            {
                ust.insert(it.second);
            }       
         }
        
        return true;
    }
};