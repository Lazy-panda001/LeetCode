class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        vector<string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string, int> ump;
        
        for(int i=0; i< words.size(); i++)
        {
            string str;
            
            for(int j=0; j<words[i].size(); j++ )
            {
                str += vec[words[i][j] - 'a'];
            }
            
            ump[str] = 1;
        }
        
        return ump.size();
        
        
    }
};