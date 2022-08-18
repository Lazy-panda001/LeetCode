class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        // count each elements
        unordered_map<int, int> ump;
        for(int i=0; i<arr.size(); i++)
        {
            ump[arr[i]]++;
        }
        
        priority_queue<int> maxH;
        
        for(auto it : ump)
        {
            maxH.push(it.second);
        }
        
        int removed = 0, min_set = 0;
        
        while(removed < arr.size()/2)
        {
            removed += maxH.top();
            min_set++;
            maxH.pop();
        }
        
        return min_set;
        
    }
};