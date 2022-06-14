class Solution 
{
public:
    
    int lcs(string str1, string str2)
    {
        int m = str1.size();
        int n = str2.size();
        
        int dp[m+1][n+1];
        
        for(int i=0; i<m+1; i++)
        {
            dp[i][0] = 0;
        }
        
        for(int j=0; j<n+1; j++)
        {
            dp[0][j] = 0;
        }
        
        for(int i=1; i<m+1; i++)
        {
            for(int j=1; j<n+1; j++)
            {
                if(str1[i-1] == str2[j-1])
                {
                    int ascii_val_of_char = str1[i-1];
                    dp[i][j] = dp[i-1][j-1] + ascii_val_of_char;
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return dp[m][n];
    }
    
    int minimumDeleteSum(string s1, string s2) 
    {
        int sum1 = 0;
        for(auto val : s1)
        {
            sum1 +=val;
        }
        
        int sum2 = 0;
        for(auto val : s2)
        {
            sum2 +=val;
        }
        
        int lcs_sum = lcs(s1,s2);
        
        return sum1 + sum2 - 2*lcs_sum;
        
    }
};