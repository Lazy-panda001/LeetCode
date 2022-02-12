class Solution {
public:
    int ladderLength(string Begin, string End, vector<string>& wordList) 
    {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        
        if(dict.find(End) == dict.end()) // means end string is not present
            return 0;
        
        queue<string> qu;
        qu.push(Begin);
        int steps=1;
        
       while(!qu.empty())
        {
           
           int size = qu.size();
           
           for(int i=0; i<size; i++)
           {
               string str = qu.front(); qu.pop();
               
                if(str == End)
                {
                    return steps;  // breaking point
                }
               
               for(int i=0; i<str.size(); i++)
               {
                   for(char ch = 'a' ; ch<='z'; ch++)
                   {
                       char c = str[i]; // 0 , 1 , 2
                       str[i] = ch; // modify
                       
                       if(dict.find(str) != dict.end())  // present in dictionary
                       {
                           dict.erase(str);
                           qu.push(str);
                       }
                       
                       // again got bach to previous string
                       str[i] = c;
                   }
               }
           }
            steps++;
        }
        return 0;
        
    }
};