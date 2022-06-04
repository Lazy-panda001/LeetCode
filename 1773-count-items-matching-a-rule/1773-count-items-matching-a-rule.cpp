class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
        int count = 0;
        
        if(ruleKey == "type")
        {
            
            for(auto it : items)
            {
                if(it[0] == ruleValue)
                {
                    count++;
                }
            }
            return count;
        }
        
        else if( ruleKey == "color")
        {
            for(auto it : items)
            {
                if(it[1] == ruleValue)
                {
                    count++;
                }
            }
            
            return count;
        }
        
        else
        {
            for(auto it : items)
            {
                if(it[2] == ruleValue)
                {
                    count++;
                }
            }
            
            return count;
        }
        
    }
};