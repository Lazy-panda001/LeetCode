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
    ListNode* deleteMiddle(ListNode* head) 
    {
         if(head->next == nullptr)
        {
            return nullptr;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        
        if(head == nullptr)
        {
            return head;
        }
        
        while(fast != nullptr and fast->next != nullptr)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(slow->next != nullptr)
        {
            prev->next = slow->next;
        }
        
        else if(slow->next == nullptr)
        {
            prev->next = nullptr;
        }
        return head;
    }
};