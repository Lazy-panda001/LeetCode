class Solution {
public:
    static int Setbits(int n)
    {
        int count=0;
        
        while(n>0)
        {
            n = n & (n-1);
            count++;
        }
        
        return count;
    }
    
  static bool cmp(int a, int b)
    {
	    int c1 = Setbits(a);
        int c2 = Setbits(b);
      if(c1 == c2)
      {
          return (a<b);
      }
      else
          return (c1<c2);
    }
    
    vector<int> sortByBits(vector<int>& arr) 
    {
       sort(arr.begin(),arr.end(),cmp);
        return arr;
    }
};