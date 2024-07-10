class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stk;
        
        string temp1 = "../";
        string temp2 = "./";
        
        for(int i=0; i<logs.size(); i++) 
        {
            string str = logs[i];
            
            if((i == 0) and ( logs[i] == temp1 or logs[i] == temp2))
            {
                continue;
            }
            else
            {
                if(logs[i] != temp1 and logs[i] != temp2) 
                {
                    stk.push(logs[i]);
                }
                else if(logs[i] == temp1 and stk.size() != 0)
                {
                    stk.pop();
                }
                else if( logs[i] == temp2 and stk.size() != 0)
                {
                    continue;
                }
            }
        }
        
        return stk.size();
    }
};