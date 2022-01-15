class Solution {
public:
    int minJumps(vector<int>& arr) 
    {
        int n = arr.size();
        if(n==1)
        {
            return 0;
        }
        
        unordered_map<int, vector<int>> ump;
        for(int i=0; i<arr.size(); i++)
        {
            ump[arr[i]].push_back(i);
        }
        
        queue<int> qu;
        qu.push(0);
        
        vector<int> vis(n,0);
        vis[0]=1;
        
        int steps = 0;
        
        bool flag = false;
        while(!qu.empty())
        {
            int size = qu.size();
            
           // steps++;
            
            for(int i=0; i<size; i++)
            {
                int index = qu.front();
                qu.pop();
                
                if(index == n-1)
                {
                    flag = true;
                    break;
                }
                
                // just right
                if(index+1 < n and vis[index+1] == 0)
                {
                    qu.push(index+1);
                    vis[index+1] = 1;
                }
                
                //jump left
                if(index-1 >=0 and vis[index-1] == 0)
                {
                    qu.push(index-1);
                    vis[index-1] = 1;
                }
                
                //jump to equal
                if(ump.find(arr[index]) != ump.end())
                {
                    for(auto i : ump[arr[index]])
                    {
                        //if(i != index)
                        if(vis[i] == 0)
                        {
                            qu.push(i);
                            vis[i]=1;
                        }
                    }
                    ump.erase(arr[index]);
                }
            }
            if(flag == true)
            {
                break;
            }
            else
                steps++;
            
            
        }
        
        return steps;
        
        
    }
};