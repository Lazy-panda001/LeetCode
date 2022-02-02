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
    int find_length(ListNode* head)
    {
        int len=0;
        while(head)
        {
            len++;
            head = head->next;
        }
    return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int len = find_length(head);
        
        ListNode* curr = head;
        int val = len - n;
        
        if(val < 0)
        {
            return nullptr;
        }
        
        if(val == 0)
        {
            return head->next;
        }
        
        else
        {
            while(--val)
            {
                curr = curr->next;
            }
        }
        curr->next = curr->next->next;
        return head;
        
    }
};