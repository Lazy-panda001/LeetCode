class Solution {
public:
    int INF = 10000000;
    int dp[101][101][21]; // [m][target+1][n+1]
    int func(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target, int i, int nbr, int left)
    {
        
        if(i == m)
        {
            if(nbr == target)
            {
                return 0;
            }
            else
                return INF;
        }
        
        if(nbr > target)
        {
            return INF;
        }
        
        if(dp[i][nbr][left] != -1)
        {
            return dp[i][nbr][left];
        }
        
        if(houses[i] == 0) // no paint
        {
            int min_Cost = INF;
            for(int c=1; c<=n; c++)
            {
                int new_nbr = nbr;
                if(c != left)
                {
                    new_nbr = nbr+1;
                }
                min_Cost = min(min_Cost, cost[i][c-1] + func(houses, cost, m, n, target, i+1, new_nbr, c));
            }
            dp[i][nbr][left] = min_Cost; // store then return
            return min_Cost;
        }
        else // paint is there , so only previous color/ nbr condition will be checked
        {
             int new_nbr = nbr;
            if(houses[i] != left)
            {
                new_nbr = nbr+1;
            }
            
            dp[i][nbr][left]  = func(houses, cost, m, n, target, i+1, new_nbr, houses[i]);
            return dp[i][nbr][left];
        }
    }
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) 
    {
        memset(dp,-1,sizeof(dp));
        
        int ans = func(houses, cost, m, n, target, 0,0,0);
        if(ans < INF)
        {
            return ans;
        }
        return -1;
        
    }
};