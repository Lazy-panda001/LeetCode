class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s1.size() > s2.size())
        {
            return false;
        }
        
        //vector<int> freq1(26,0);
        int freq1[26] ={0};
        for(int i=0; i<s1.size(); i++)
        {
            freq1[s1[i]- 'a']++;
        }
        
        for(int i=0; i<s2.size(); i++)
        {
            string str = s2.substr(i,s1.size());
            
           // vector<int>freq2(26,0);
            int freq2[26] = {0};
            
            for(int i=0; i<str.size(); i++)
            {
                freq2[str[i] - 'a']++;
            }
            
            bool flag = true;
            
            for(int k=0; k<26; k++)
            {
                if(freq1[k] != freq2[k])
                {
                    flag = false;
                    break;
                }
            }
            
            if(flag == true)
            {
                return true;
            }
        }
        return false;   
    }
};