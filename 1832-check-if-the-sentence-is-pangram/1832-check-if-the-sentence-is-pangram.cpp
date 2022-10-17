class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        vector<int> freq(26,0);
        int total=0;
        for(int i=0; i<sentence.size(); i++)
        {
            if(++freq[sentence[i]-'a'] ==1)
            {
                total++;
            }
        }
        
        cout<<total<<endl;
        if(total== 26)
        {
            return true;
        }
        return false;
      
        
    }
};