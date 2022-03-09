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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        
        if(head == nullptr or head->next == nullptr)
        {
            return head;
        }
        
        ListNode* prev = nullptr, *curr = head, *after_curr = head->next;
        
        while(after_curr)
        {
            if(after_curr != nullptr and curr->val == after_curr->val)
            {
                while(after_curr and curr->val == after_curr->val)
                {
                    after_curr = after_curr->next;
                }
                
                if(prev == nullptr) // from the head pointer only, all values are repeating
                {
                    head = after_curr;
                }
                else
                {
                    prev->next = after_curr;
                }
            }
            else // not match
            {
                prev = curr;
            }
            
            curr = after_curr;
            
            if(after_curr != nullptr)
                after_curr = after_curr->next;
            
        }
        
        return head;
        
    }
};