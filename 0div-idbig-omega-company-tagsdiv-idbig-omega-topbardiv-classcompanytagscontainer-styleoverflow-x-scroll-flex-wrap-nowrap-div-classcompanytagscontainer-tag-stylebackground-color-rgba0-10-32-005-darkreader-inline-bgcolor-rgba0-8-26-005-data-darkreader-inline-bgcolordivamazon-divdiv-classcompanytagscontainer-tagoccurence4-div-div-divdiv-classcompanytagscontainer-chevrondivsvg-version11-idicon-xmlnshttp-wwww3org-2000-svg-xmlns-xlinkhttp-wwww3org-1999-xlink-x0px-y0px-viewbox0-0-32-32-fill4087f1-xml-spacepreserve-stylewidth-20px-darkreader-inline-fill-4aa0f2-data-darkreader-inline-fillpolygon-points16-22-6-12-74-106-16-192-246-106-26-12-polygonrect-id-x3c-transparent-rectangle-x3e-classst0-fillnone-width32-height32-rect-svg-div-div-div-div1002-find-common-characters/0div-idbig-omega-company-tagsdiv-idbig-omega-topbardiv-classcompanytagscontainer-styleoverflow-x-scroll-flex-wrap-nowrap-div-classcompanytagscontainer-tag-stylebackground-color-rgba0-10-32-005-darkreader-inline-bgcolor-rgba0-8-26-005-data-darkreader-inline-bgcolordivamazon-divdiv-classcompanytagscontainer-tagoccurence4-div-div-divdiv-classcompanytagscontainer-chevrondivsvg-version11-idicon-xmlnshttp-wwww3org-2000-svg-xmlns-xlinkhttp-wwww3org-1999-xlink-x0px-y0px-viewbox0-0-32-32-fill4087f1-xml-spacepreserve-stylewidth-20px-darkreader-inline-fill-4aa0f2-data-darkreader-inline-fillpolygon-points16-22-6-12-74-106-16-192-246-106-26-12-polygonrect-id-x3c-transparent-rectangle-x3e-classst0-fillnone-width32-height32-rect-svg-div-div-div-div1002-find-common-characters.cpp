class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
      vector<int> hash1(26,0);
      for(auto c:words[0])
      {
        hash1[c - 'a']++;
      }
      
      vector<int> hash2(26,0);
      for(int i=1; i<words.size();i++)
      {
        for(auto c:words[i])
        {
          hash2[c-'a']++;
        }
        
        for(int i=0; i<26; i++)
        {
          hash1[i] = min(hash1[i],hash2[i]);
          hash2[i]=0;
        }
      }
      
      // now in Hash1 ,, all common characters we have whose count>0
      
      vector<string> res;
      int count=0;
      for(int i=0; i<26; i++)
      {
        if(hash1[i] >0)
        {
          count = hash1[i];
          while(count--)
          {
            char x = i + 'a';
            string str;
            str = x;
            res.push_back(str);
          }
        }
      }
      return res;
        
    }
};