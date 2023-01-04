class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        // 1. sort the array
        // 2. count each element --> uae map
        // 2 -> 3, 3 -> 3, 4 -> 5
        
       // sort(task.begin(), tasks.end());
        
        unordered_map<int,int> ump;
        
        int rounds = 0;
        
        for(int i=0; i<tasks.size(); i++)
        {
            ump[tasks[i]]++;
        }
        
        for(auto it : ump)
        {
            int diff = it.first;
            int count = it.second;
            
            if(count == 1)
            {
                return -1;
            }
            
            // if(count == 2 or count == 3)
            // {
            //     rounds++;
            // }
            // else if(count % 2 == 0)
            // {
            //     rounds += count / 2;
            // }
            
            if(count % 3 == 0)
            {
                rounds += count / 3;
            }
            else
            {
                rounds += (count/3) + 1;
            }
        }
        
        return rounds;
    }
};