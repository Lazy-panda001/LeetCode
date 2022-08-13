class Solution {
public:
    vector<int> findSubstring(string str, vector<string>& words) 
    {
        unordered_map<string, int> ump, temp;
        int each_word = words[0].size();
        int total_words = words.size();
        
        int sL = str.size();
        vector<int> res;
        
        for(int i=0; i<words.size(); i++)
        {
            ump[words[i]]++;
        }
        
        for(int i=0; i<sL - each_word*total_words + 1; i++)
        {
            for(int j=i; j<i+each_word*total_words; j+=each_word)
            {
                string s = str.substr(j,each_word);
                temp[s]++;
            }
            
            int flag = 1;
            
            for(auto it:ump)
            {
                if(ump[it.first] != temp[it.first])
                {
                    flag = 0;
                    break;
                }
            }
            
            if(flag != 0)
            {
                res.push_back(i);
            }
            
            temp.clear();
        }
        return res;
    }
};