class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) 
    {
        for(int i=0; i<s.size()-1; i++)
        {
            for(int j=i+1; j<s.size(); j++)
            {
                if(s[i] == s[j])
                {
                    int dis = j - i-1;
                    if(distance[s[i]-'a'] != dis)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};