class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        // take 2 queue
        queue<char>qu1,qu2;
        
        if(s.size() != goal.size())
        {
            return false;
        }
        
        for(int i=0; i<s.size(); i++)
        {
            qu1.push(s[i]);
            qu2.push(goal[i]);
        }
        
        if(s==goal)
            return true;
        
        int i=0;
        while(i<s.size())
        {
            qu1.push(qu1.front());
            qu1.pop();
            
            if(qu1 == qu2)
                return true;
            i++;
        }
        return false;
        
    }
};