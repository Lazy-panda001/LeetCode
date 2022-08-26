class Solution {
public:
    bool reorderedPowerOf2(int n) 
    {
        string initial_str = to_string(n);
        
        sort(initial_str.begin(), initial_str.end());
        
        cout<<initial_str<<endl;
        
        for(int i=0; i<=30; i++)
        {
            int num = pow(2,i);
            string curr_str = to_string(num);
            cout<<curr_str;
            
            sort(curr_str.begin(), curr_str.end());
            
            if(initial_str == curr_str)
            {
                return true;
            }
        }
        
        return false;
        
    }
};