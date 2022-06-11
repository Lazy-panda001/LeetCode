class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) 
    {
        int n = nums.size();
        
        vector<bool>visited(10001,false);
        
        queue<int> qu;
        qu.push(start);
      //  visited[start] = true;
        
        int min_oprns = 0;
        
        while(!qu.empty())
        {
            int size = qu.size();
            
            while(size--)
            {
                int node = qu.front(); qu.pop();
                
                if(node == goal)
                    return min_oprns;
                
                if(node > 1000 or node <0 or visited[node] == true)
                {
                    continue; // do nothing
                }
                
                visited[node] = true;
                
                for(int i=0; i<n; i++)
                {
                    int node1 = node + nums[i];
                    int node2 = node - nums[i];
                    int node3 = node ^ nums[i];
                    
                    qu.push(node1); qu.push(node2); qu.push(node3);
                }
            }
            min_oprns++;
        }
        
        return -1;
        
    }
};