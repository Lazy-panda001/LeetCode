/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        if(head == nullptr or head->next == nullptr)
        {
            return nullptr;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(slow and fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast) // check if any cycle hay ya nahi
            {
                slow = head;
                while(slow != fast)  // if yes then find that join node
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow; // return fast;
            }
            else
            {
                continue;
            }
        }
        return nullptr;
        
    }
};