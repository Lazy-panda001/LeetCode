class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        long long product = 1;
        long long sum = 0;
        int num = n;
        
        while(num >0)
        {
            int rem = num % 10;
            
            product = product*rem;
            sum = sum + rem;
            
            num = num / 10;
        }
        
        cout<<product<<" "<<sum<<endl;
        return (product - sum);
        
        
        
    }
};