/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int find_length(ListNode* head)
    {
        int len =0;
        while(head != nullptr)
        {
            len++;
            head = head->next;
        }
        return len;
    }
    
    vector<int> nextLargerNodes(ListNode* head) 
    {
        
        ListNode* temp = head;
        int n = find_length(head);
        
        vector<int> nums(n);
        
        int k=0;
        
        while(temp)
        {
            nums[k] = temp->val;
            k++;
            temp = temp->next;
        }
        
        /*for(auto it:nums)
        {
            cout<<it<<" ";
        }*/
            
        stack<int> stk;
        vector<int>res;
        
        for(int i = n-1; i>=0; i--)
        {
            if(stk.size() == 0)
            {
                res.push_back(0);
            }
            else if(stk.size()>0 and stk.top()>nums[i])
            {
                int ans = stk.top();
                res.push_back(ans);
            }
            else if(stk.size()>0 and stk.top()<=nums[i])
            {
                while(stk.size()>0 and stk.top()<=nums[i])
                {
                    stk.pop();
                }
                
                // may be stack empty
                if(stk.size() == 0)
                {
                    res.push_back(0);
                }
                
                else if(stk.top()>nums[i])
                {
                    int ans = stk.top();
                    res.push_back(ans);
                }
            }
            
            
            stk.push(nums[i]);
        }
        
        reverse(res.begin(), res.end());
        return res;
        
    }
};