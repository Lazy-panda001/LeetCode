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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head == nullptr or head->next == nullptr or k ==0)
        {
            return head;
        }
        ListNode* curr = head;
        
        int len=1;
        while(curr->next)
        {
            len++;
            curr = curr->next;
        }
       // cout<<len<<endl;
        k = k % len;
        
        curr->next = head; // make it circular
        
        ListNode* head1 = head;
        
        int val = len - k;
        while(--val)
        {
            head1 = head1->next;
        }
        
        head = head1->next;
        head1->next = nullptr;
        
        return head;
    }
};