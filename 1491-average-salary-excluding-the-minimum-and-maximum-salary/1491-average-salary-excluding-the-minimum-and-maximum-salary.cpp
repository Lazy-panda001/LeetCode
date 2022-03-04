class Solution {
public:
    double average(vector<int>& salary) 
    {
       
        double ans=0;
        
        int n = salary.size();
        
        for(int i=0; i<salary.size(); i++)
        {
            ans +=salary[i];
        }
        
        int max_number = *max_element(salary.begin(), salary.end());
        int min_number = *min_element(salary.begin(), salary.end());
        
        ans = ans - max_number - min_number;
        
        return (ans / (n-2));
        
    }
};