class Solution {
public:
    int bitwiseComplement(int num) 
    {
        if(num ==0)
        {
            return 1;
        }
          vector<int> vec;
        while(num !=0)
        {
            vec.push_back(num % 2);
            num = num / 2;
        }
        
        reverse(vec.begin(), vec.end());
        
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i] == 0)
            {
                vec[i] = 1;
            }
            else
                vec[i] = 0;
        }
        
        
        long long  two=1;
        long long sol = 0;
        
        for(int i=vec.size()-1; i>=0; i--)
        {
            sol = sol + vec[i] *two;
            two = two*2;
            
        }
        return sol;
        
    }
};