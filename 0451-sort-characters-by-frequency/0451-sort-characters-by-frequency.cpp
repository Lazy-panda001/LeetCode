class Solution {
public:
    string frequencySort(string s) 
    {
        
        unordered_map<char, int> ump;
        for(auto ch : s)
        {
            ump[ch]++;
        }
        
        priority_queue<pair<int,char>> maxH;
        
     
        
        for(auto it: ump)
        {
            maxH.push({it.second, it.first});
        }
        
        string res = "";
        
        while(!maxH.empty())
        {
            int count = maxH.top().first;
            
            char ch = maxH.top().second;
            
            maxH.pop();
            
            string temp = "";
            
            for(int i=0; i<count; i++)
            {
                temp +=ch;
            }
            
            res +=temp;
        }
        
        return res;
        
    }
};