class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
      unordered_map<char, int>ump;
      if(magazine.size()<ransomNote.size())
      {
        return false;
      }
      for(auto x:magazine)
      {
        ump[x]++;
      }
      
      for(int i=0; i<ransomNote.size(); i++)
      {
        if(ump[ransomNote[i]] >0)
        {
            ump[ransomNote[i]]--;
        }
        else
        {
          return false;
        }
      }
      return true;   
    }
};