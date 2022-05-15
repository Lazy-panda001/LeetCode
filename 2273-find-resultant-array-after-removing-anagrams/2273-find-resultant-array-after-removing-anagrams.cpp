class Solution {
public:
    bool anagram(string str1 , string str2)
    {
        int freq[100] = {0};
        
        if(str1.size() != str2.size())
            return false;
        
        for(int i=0; i<str1.size(); i++)
        {
            freq[str1[i] - 'a']++;
            freq[str2[i] - 'a']--;
        }
        
        for(int i=0; i<100; i++)
        {
            if(freq[i] != 0)
                return false;
        }
        return true;
    }
    
    vector<string> removeAnagrams(vector<string>& words) 
    {
        //sort(words.begin(), words.end());
        
        vector<string> res;
        res.push_back(words[0]);
        
        for(int i=1; i<words.size(); i++)
        {
            string str1 = res.back(); cout<<str1<<" ";
            string str2 = words[i]; cout<<str2<<endl;
            if(anagram(str1 ,str2) == true)
            {
                continue;
            }
            else
                res.push_back(words[i]);
        }
        return res;
    }
};