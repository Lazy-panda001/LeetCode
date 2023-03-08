class Solution {
public:
    
    bool eatAllBalana(vector<int>& piles, int mid, int h) {
        int total_hours = 0;
        
        for(auto val : piles) {
            total_hours += val / mid;
            
            if(val % mid != 0)
            {
                total_hours++;
            }
        }
        
        return total_hours <= h;
            
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans=-1;
        
        while(low < high) {
            int mid = low + (high - low) / 2;
            
            if(eatAllBalana(piles, mid, h) == true) {
                high = mid;
            }
            else {
                low = mid+1;
            }
        }
        
        return low;
        
    }
};