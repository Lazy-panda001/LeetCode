class Solution {
public:
  int count_Set(int n)
  {
    int count=0;
    while(n)
    {
      count++;
      n = n & (n-1);
    }  
    return count;
    
  }
  
    vector<int> countBits(int num) 
    {
      vector<int> res;
      for(int i=0; i<=num; i++)
      {
        int count = count_Set(i);
        res.push_back(count);
      }
      return res;
        
    }
};