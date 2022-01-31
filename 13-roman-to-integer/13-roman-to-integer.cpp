class Solution {
public:
    int romanToInt(string str) 
    {
            unordered_map<char,int> ump;
        ump.insert(make_pair('I' , 1));
        ump.insert(make_pair('V' , 5));
        ump.insert(make_pair('X' , 10));
        ump.insert(make_pair('L' , 50));
        ump.insert(make_pair('C' , 100));
        ump.insert(make_pair('D' , 500));
        ump.insert(make_pair('M' , 1000));
        
        int n = str.size();
        
        int sum = 0;
        int i=0;
        while(i<n)
        {
            if(i==n-1 or ump[str[i]] >= ump[str[i+1]])  
            {
                sum += ump[str[i]];
                i++;
            }
            else  //  ump[str[i]] < ump[str[i+1]]
            {
                sum += ump[str[i+1]] - ump[str[i]];
                i=i+2;
            }
            
        }
        
        return sum;
    }
};