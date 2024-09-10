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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* p = head;
        ListNode* q = head->next;
        
        
        while(q != nullptr)
        {
            int val1 = p->val;
            int val2 = q->val;
            
            int gcd = __gcd(val1,val2);
            ListNode* temp = new ListNode(gcd);
            p->next = temp;
            temp->next = q;
            
            p = q;
            q = q->next;
        }
        
        return head;
    }
};