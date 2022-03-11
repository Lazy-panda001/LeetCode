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
        if(head == nullptr or head->next == nullptr or k==0)
        {
            return head;
        }
        
        ListNode* curr = head;
        int len = 1;
        while(curr->next)
        {
            len++;
            curr = curr->next;
        }
        curr->next = head;
        k = k % len;
        
        int val = len - k;
        ListNode* newHead = head;
        while(--val)
        {
            newHead = newHead->next;
        }
        
        head = newHead->next;
        newHead->next = nullptr;
        
        return head;
        
    }
};