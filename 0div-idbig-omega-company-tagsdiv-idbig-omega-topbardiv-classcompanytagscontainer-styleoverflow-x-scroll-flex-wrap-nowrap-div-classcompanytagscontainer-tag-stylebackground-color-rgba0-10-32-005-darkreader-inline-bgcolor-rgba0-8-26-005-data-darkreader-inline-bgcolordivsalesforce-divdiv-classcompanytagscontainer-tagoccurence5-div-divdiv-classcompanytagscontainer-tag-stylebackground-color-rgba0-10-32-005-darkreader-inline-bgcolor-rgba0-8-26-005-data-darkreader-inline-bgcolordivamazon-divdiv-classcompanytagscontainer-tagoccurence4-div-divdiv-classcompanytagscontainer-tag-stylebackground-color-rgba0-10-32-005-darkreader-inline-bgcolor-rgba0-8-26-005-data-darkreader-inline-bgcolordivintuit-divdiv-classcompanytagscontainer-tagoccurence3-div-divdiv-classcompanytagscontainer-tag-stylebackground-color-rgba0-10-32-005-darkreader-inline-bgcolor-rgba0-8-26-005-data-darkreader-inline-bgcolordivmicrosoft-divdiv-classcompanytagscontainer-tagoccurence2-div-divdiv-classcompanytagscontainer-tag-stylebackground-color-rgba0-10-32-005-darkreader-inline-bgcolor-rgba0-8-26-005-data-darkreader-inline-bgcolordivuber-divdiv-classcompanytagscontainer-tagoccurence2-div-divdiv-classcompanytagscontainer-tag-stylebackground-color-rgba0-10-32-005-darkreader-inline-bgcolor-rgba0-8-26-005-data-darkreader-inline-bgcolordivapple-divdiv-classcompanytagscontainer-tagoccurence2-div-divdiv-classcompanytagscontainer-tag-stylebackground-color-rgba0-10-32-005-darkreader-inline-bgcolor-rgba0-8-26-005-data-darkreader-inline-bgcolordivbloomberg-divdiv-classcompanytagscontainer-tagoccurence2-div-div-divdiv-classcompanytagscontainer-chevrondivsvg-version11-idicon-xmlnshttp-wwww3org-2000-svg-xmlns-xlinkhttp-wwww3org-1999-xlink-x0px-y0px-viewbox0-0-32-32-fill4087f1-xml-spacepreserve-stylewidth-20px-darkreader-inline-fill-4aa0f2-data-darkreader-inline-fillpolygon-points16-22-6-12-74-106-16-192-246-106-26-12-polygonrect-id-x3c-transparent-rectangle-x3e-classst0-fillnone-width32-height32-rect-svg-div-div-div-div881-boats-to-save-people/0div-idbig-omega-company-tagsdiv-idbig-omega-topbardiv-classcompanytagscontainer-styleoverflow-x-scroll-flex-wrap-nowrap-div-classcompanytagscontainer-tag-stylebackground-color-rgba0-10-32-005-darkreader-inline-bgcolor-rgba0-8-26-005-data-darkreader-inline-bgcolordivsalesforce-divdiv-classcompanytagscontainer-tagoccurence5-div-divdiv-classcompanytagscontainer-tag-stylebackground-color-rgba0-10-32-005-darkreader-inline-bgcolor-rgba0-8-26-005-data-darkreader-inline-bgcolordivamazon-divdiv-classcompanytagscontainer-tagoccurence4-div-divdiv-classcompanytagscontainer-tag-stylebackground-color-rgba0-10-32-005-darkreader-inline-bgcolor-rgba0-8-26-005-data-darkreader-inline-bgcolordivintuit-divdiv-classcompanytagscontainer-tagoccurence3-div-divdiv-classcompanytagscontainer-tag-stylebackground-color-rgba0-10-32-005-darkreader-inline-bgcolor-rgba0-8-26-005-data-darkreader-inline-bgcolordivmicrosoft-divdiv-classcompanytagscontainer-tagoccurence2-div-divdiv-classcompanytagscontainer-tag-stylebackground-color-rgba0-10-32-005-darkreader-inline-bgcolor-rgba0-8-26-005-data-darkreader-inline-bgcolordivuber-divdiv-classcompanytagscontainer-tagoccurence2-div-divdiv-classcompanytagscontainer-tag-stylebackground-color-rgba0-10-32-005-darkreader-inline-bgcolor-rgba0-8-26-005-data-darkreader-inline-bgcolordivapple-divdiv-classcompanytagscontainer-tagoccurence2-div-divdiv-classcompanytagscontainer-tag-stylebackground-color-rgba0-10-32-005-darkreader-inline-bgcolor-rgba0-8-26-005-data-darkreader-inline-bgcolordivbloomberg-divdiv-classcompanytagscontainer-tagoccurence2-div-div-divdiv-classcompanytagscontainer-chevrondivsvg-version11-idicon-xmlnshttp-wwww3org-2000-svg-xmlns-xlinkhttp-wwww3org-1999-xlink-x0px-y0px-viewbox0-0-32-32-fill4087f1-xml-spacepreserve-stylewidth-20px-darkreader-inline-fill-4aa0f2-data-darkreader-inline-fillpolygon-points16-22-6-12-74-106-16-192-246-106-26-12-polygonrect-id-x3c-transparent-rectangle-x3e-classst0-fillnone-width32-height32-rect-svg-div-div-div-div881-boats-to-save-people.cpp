class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int low = 0;
        int high = people.size()-1;
        
        int total_boats = 0;
        while(low <= high) {
            if(people[low] + people[high] <= limit) {
                total_boats++;
                low++;
                high--;
            }
            else {
                high--;
                total_boats++;
            }
        }
        
        return total_boats;
    }
};