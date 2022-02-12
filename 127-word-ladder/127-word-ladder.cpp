class Solution 
{
public:
    int ladderLength(string Begin, string End, vector<string>& wordList) 
    {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if(dict.find(End)==dict.end())
        {
            return 0;
        }
        queue<string>qu;
        qu.push(Begin);
        int steps=1;
        while(!qu.empty())
        {
            int size=qu.size();
         
            for(int i=0; i<size; i++)
            {
                string str=qu.front();
                qu.pop();
                
                if(str==End)
                {
                    return steps;
                }
                for(int i=0;i<str.size();i++)
                {
                    for(char ch ='a'; ch <='z';ch++)
                    {
                        char c=str[i];
                        str[i]=ch;
                        if(dict.find(str)!=dict.end())
                        {
                            dict.erase(str);
                            qu.push(str);
                        }
                        str[i]=c;
                    }
                }
              
            }
            steps++;
        }
        return 0;
    }
};