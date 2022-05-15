class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
        string str = to_string(num);
        int count=0;
        
        for(int i=0; i<=str.size()-k; i++)
        {
            string str2 = str.substr(i,k);
            
            int divisor = stoi(str2);
            
            if(divisor == 0 )
                continue;
            
            if(num % divisor == 0)
            {
                count++;
            }
        }
        return count;
    }
};