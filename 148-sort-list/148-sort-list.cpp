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
    ListNode* middle(ListNode* head)
    {
        if(head == nullptr or head->next == nullptr)
        {
            return head;
        }
        
        ListNode* slow = head, *fast = head;
        
        while(slow and fast->next and fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode* merge(ListNode* head1 , ListNode* head2)
    {
        if(head1 == nullptr and head2 == nullptr)
        {
            return nullptr;
        }
        if(head1 == nullptr)
        {
            return head2;
        }
        if(head2 == nullptr)
        {
            return head1;
        }
        
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        
        while(head1 and head2)
        {
            if(head1->val < head2->val)
            {
                prev->next = head1;
                head1 = head1->next;
            }
            else
            {
                prev->next = head2;
                head2 = head2->next;
            }
            prev = prev->next;
        }
        
        if(head1 != nullptr)
        {
            prev->next = head1;
        }
        if(head2 != nullptr)
        {
            prev->next = head2;
        }
        
        return dummy->next;
    }
    
    ListNode* sortList(ListNode* head) 
    {
        if(head == nullptr or head->next == nullptr)
        {
            return head;
        }
        ListNode* mid = middle(head);
        ListNode* nhead = mid->next;
        mid->next = nullptr;
        
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(nhead);
        
       return merge(l1,l2);
    }
};