class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        sort(people.begin(), people.end());
        
        // Two pointer approach
        
        int low=0, high = people.size() -1;
        int total_boats = 0;
        while(low <= high)
        {
            if(people[low] + people[high] <= limit)
            {
                low++; high--;
                total_boats++;
            }
            else // sum becomes greater than limit , so this will go alone in one boat
            {
                high--;
                total_boats++;
            }
        }
        
        return total_boats;
        
    }
};