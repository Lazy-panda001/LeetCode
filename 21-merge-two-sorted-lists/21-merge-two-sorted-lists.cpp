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
        if(head1 == nullptr and head2==nullptr)
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
                prev = prev->next;
            }
            else
            {
                prev->next = head2;
                head2 = head2->next;
                prev = prev->next;
            }
        }
        
        if(head1)
        {
            prev->next = head1;
        }
        else if(head2)   
        {
            prev->next = head2;
        }
        
        return dummy->next;
    }
};