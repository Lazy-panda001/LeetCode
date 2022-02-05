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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        priority_queue<int, vector<int> , greater<int>> minH;
        
        for(int i=0; i<lists.size(); i++)
        {
            ListNode* temp = lists[i];
            while(temp != nullptr)
            {
                minH.push(temp->val);
                temp = temp->next;
            }
            
        }
       
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        
        while(!minH.empty())
        {
            ListNode* temp = new ListNode(minH.top()); minH.pop();
            curr->next = temp;
            curr = curr->next;
            
        }
        return dummy->next;
        
    }
};