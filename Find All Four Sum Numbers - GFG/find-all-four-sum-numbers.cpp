// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        // Your code goes here
        vector<vector<int>> res;
      if(nums.size() ==0)
      {
        return res;
      }
      
      int n = nums.size();
      
      //sort the array
      sort(nums.begin(),nums.end());
      
      for(int i=0; i<n; i++)
      {
        for(int j=i+1; j<n; j++)
        {
          
          // remaining value
          int target_sum1 = target - nums[i] - nums[j];
          
          
          // make 2 pointer approach
          int front = j+1;
          int back = n-1;
          
          while(front < back)
          {
            int two_sum = nums[front] + nums[back];
            
            if(two_sum < target_sum1) front++;
            
            else if(two_sum > target_sum1) back--;
            
            // means two_sum == target_sum1
            else
            {
              vector<int> quad(4,0);
              quad[0]= nums[i];
              quad[1]= nums[j];
              quad[2]= nums[front];
              quad[3]= nums[back];
              
              res.push_back(quad);
            
              while(front < back and nums[front] == quad[2]) front++;
              
              while(front < back and nums[back] == quad[3]) back--;
            }
          }
          while(j+1<n and nums[j+1] == nums[j]) j++;
        
      }
        while(i+1<n and nums[i+1] == nums[i]) i++;
        
    }
      return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends