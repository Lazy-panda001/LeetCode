class Solution {
public:
    string interpret(string command) 
    {
        string res="";
        int n = command.size();
        for(int i=0; i<n;)
        {
            if(command[i] == 'G')
            {
                res +='G';
                i++;
            }
            else if(command.substr(i,2) == "()")
            {
                res +="o";
                i = i+2;
            }
            else if(command.substr(i,4) == "(al)")
            {
                res +="al";
                i = i+4;
            }
        }
        
        return res;
        
    }
};