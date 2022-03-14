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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* r=nullptr, *q=nullptr , *p = head;
        
        while(p != nullptr)
        {
            r=q; // all 3 forward shift
            q=p;
            p = p->next;
            
            q->next = r; // backword linking
        }
        
        return q;
        
    }
};