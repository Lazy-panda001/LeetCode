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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) 
    {
        // Iterative code
        /*if(head1 == nullptr and head2 == nullptr)
        {
            return nullptr;
        }
        if(head1==nullptr)
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
        */
        
        // Recursive code : 
        if(head1 == nullptr and head2 == nullptr)
        {
            return nullptr;
        }
        if(head1==nullptr)
        {
            return head2;
        }
        if(head2 == nullptr)
        {
            return head1;
        }
        if(head1->val < head2->val)
        {
            head1->next = mergeTwoLists(head1->next , head2);
            return head1;
        }
        else
        {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
        
    }
};