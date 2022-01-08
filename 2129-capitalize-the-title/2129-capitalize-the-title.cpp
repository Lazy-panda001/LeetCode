class Solution {
public:
    string make_lower(string str)
    {
        int i=0;
       // string res="";
        while(i < str.size())
        {
            if(str[i] >= 'A' and str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        i++;
                
        }
        
        return str;
    }
    
    string capitalizeTitle(string title) 
    {
        string answer="";
        string word="";
        
        for(int i=0; i<title.size(); i++)
        {
            if(title[i] == ' ')
            {
                if(word.size()<=2)
                {
                    answer += make_lower(word);
                }
                else
                {
                    answer += toupper(word[0]);
                    answer += make_lower(word.substr(1));
                }
                word = "";
                answer = answer + " ";
                
            }
            else
            {
                word +=title[i];
            }
        }
        
        if(word.size()<=2)
        {
            answer += make_lower(word);
        }
        else
        {
            answer += toupper(word[0]);
            answer += make_lower(word.substr(1));
        }
        
        return answer;
        
        
        
    }
};