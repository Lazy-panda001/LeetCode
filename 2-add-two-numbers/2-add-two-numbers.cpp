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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* head = new ListNode(-1);
        ListNode* tail = head;
        
        int first, second , carry = 0;
        
        while(l1 or l2 or carry !=0)
        {
            if(l1)
            {
                first = l1->val;
                l1 = l1->next;
            }
            else
            {
                first = 0;
            }
            
            if(l2)
            {
                second = l2->val;
                l2 = l2->next;
            }
            else
            {
                second = 0;
            }
            
            int temp = first + second + carry;
            
            tail->next = new ListNode(temp % 10);
            carry = temp / 10;
            tail = tail->next;
        }
        
        if(carry)
        {
            tail->next = new ListNode(carry);
        }
        
        return head->next;
        
    }
};