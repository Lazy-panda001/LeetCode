class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> maxH;
        
        for(int i=0; i< gifts.size(); i++) {
            maxH.push(gifts[i]);
        }
        
        while(k--) {
            int val = maxH.top(); maxH.pop();
            int new_val = sqrt(val);
            cout << new_val<<" ";
            maxH.push(new_val);
        }
        
        long long ans = 0;
        
        while(!maxH.empty()) {
            ans +=maxH.top(); 
            maxH.pop();
        }
        
        return ans;
    }
}; 