class Solution {
public:
    vector<int>NSLindex(vector<int>& arr, int n)
    {
        vector<int> left;
        stack<pair<int, int>> st;
        int pseudo_index = -1;
        
        for(int i=0; i<n; i++)
        {
            if(st.size() == 0)
            {
                left.push_back(pseudo_index);
            }
            
            else if(st.size() > 0 and st.top().first < arr[i])
            {
                left.push_back(st.top().second);
            }
            else if(st.size() > 0 and st.top().first >= arr[i])
            {
                while(st.size() > 0 and st.top().first >= arr[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    left.push_back(-1);
                }
                else
                {
                    left.push_back(st.top().second);
                }
            }
        st.push({arr[i],i});    
        }
        
        return left;
    }
    // NSR code
    vector<int>NSRindex(vector<int>& arr, int n)
    {
        vector<int> right;
        stack<pair<int, int>> stk;
        int pseudo_index = n;
        
        for(int i=n-1; i>=0; i--)
        {
            if(stk.size() == 0)
            {
                right.push_back(pseudo_index);
            }
            
            else if(stk.size() > 0 and stk.top().first < arr[i])
            {
                right.push_back(stk.top().second);
            }
            else if(stk.size() >0 and stk.top().first >= arr[i])
            {
                while(stk.size() >0 and stk.top().first >= arr[i])
                {
                    stk.pop();
                }
                if(stk.size()==0)
                {
                    right.push_back(pseudo_index);
                }
                else
                {
                    right.push_back(stk.top().second);
                }
            }
        stk.push({arr[i],i});    
        }
        reverse(right.begin(), right.end());
        return right;
    }
    
    
    int largestRectangleArea(vector<int>& arr1) 
    {
        int n = arr1.size();
        vector<int> left =  NSLindex(arr1, n);
        vector<int> right = NSRindex(arr1, n);
        
        int max_rec = INT_MIN;
        for(int i=0; i<n; i++)
        {
            max_rec = max(max_rec , (right[i] - left[i] -1) * arr1[i]);
        }
        return max_rec;    
    }
};