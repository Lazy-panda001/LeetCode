/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        
        // finding length for headA
        int h1 = 0;
        while(p1)
        {
            h1++;
            p1 = p1->next;
        }
        
        //finding length for headB
        int h2=0;
        while(p2)
        {
            h2++;
            p2 = p2->next;
        }
        
        ListNode* temp1, *temp2; // assign accordingly 
        int diff=0;
        if(h1>h2)
        {
            diff = h1- h2;
            temp1 = headA;  // main confusing place
            temp2 = headB;
        }
        else
        {
            diff = h2 - h1;
            temp1 = headB;  // main confusing place
            temp2 = headA;
        }
        
        while(diff--)
        {
            temp1 = temp1->next;
        }
        
        if(temp1 == temp2)
        {
            return temp1;
        }
        
        while(temp1 and temp2)
        {
            if(temp1->next == temp2->next)
            {
                return temp1->next;
            }
            else
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return nullptr;
    }
};