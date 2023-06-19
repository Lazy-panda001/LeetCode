class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> prefix_sum(n+1);
        int high_altitude = 0;
        
        prefix_sum.push_back(0);
        cout<<prefix_sum.back()<<" ";
        
        for(int i=0; i<n; i++) {
            int last_val = prefix_sum.back();
            int curr_altitute = gain[i] + last_val;
            cout<<curr_altitute<<" ";
            high_altitude = max(high_altitude,curr_altitute);
            prefix_sum.push_back(curr_altitute);
        }
        
        return high_altitude;
        
    }
};