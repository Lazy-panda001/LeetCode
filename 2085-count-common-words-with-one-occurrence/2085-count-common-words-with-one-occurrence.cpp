class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) 
    {
         unordered_map<string , int> ump1 , ump2;
        
        for(int i=0; i<words1.size(); i++)
        {
            ump1[words1[i]]++;
        }
        
        for(int i=0; i<words2.size(); i++)
        {
            ump2[words2[i]]++;
        }
        
        int count=0;
        
        for(auto it : ump1)
        {
            if(it.second == 1 and ump2[it.first] == 1)
            {
                count++;
            }
        }
        return count;
        
    }
};