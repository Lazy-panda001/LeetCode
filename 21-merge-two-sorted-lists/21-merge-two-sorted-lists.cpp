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
         // code here
    if(head1 == nullptr and head2 == nullptr)
    {
        return nullptr;
    }
    
    if(head1 == nullptr)
    {
        return head2;
    }
    if(head2 == nullptr){
        return head1;
    }
    
    ListNode* dummy = new ListNode(-1);
    ListNode* prev = dummy;
    
    ListNode* temp1 = head1;
    ListNode* temp2 = head2;
    
    while(temp1 and temp2)
    {
        if(temp1->val < temp2->val)
        {
            prev->next =temp1;
            temp1 = temp1->next;
            prev = prev->next;
        }
        else
        {
            prev->next =temp2;
            temp2 = temp2->next;
            prev = prev->next;
        }
    }
    
    // if any one becomes null
    if(temp1 != nullptr)
    {
        prev->next = temp1;
    }
    else
    {
        prev->next = temp2;
    }
    
    return dummy->next;
        
    }
};