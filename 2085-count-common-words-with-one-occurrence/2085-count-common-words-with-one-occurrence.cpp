class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) 
    {
        vector<string> str1;
        unordered_map<string , int> ump1;
        
        for(int i=0; i<words1.size(); i++)
        {
            ump1[words1[i]]++;
        }
        
        for(auto it : ump1)
        {
            if(it.second == 1)
            {
                str1.push_back(it.first);
            }
            else
            {
                
            }
        }
        
        vector<string> str2;
        unordered_map<string , int> ump2;
        for(int i=0; i<words2.size(); i++)
        {
            ump2[words2[i]]++;
        }
        
         for(auto it : ump2)
        {
            if(it.second == 1)
            {
                str2.push_back(it.first);
            }
            else
            {
                
            }
        }
        
        
        int count=0;
        
       for(int i=0; i<str1.size(); i++)
       {
           for(int j=0; j<str2.size(); j++)
           {
               if(str1[i] == str2[j])
               {
                   count++;
               }
           }
       }
            
        
        return count;;
        
    }
};