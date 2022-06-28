class Solution 
{
public:
    int minDeletions(string s) 
    {
        unordered_map<char,int> mpp;
        
    for(int i=0; i<s.size(); i++)
    {
        mpp[s[i]]++;
    }
        
    int cnt = 0; 
        
    unordered_map<int,char> mpp2;
        
    for(auto i : mpp)
    {
        if(mpp2.find(i.second) == mpp2.end())
        {
            mpp2[i.second] = i.first;
           // cout<<i.second<<" "<<it.first<<endl;
        }
        else if(mpp2.find(i.second) != mpp2.end())
        {
           while(mpp2.find(i.second) != mpp2.end())
           {
                cnt++;
            
                i.second--;
           }
            
           if(i.second > 0)
            {
                mpp2[i.second] = i.first;
            }
          }
        
        }
    
        return cnt ;
    }
};