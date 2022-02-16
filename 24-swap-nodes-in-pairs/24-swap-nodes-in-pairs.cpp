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
    ListNode* swapPairs(ListNode* head) 
    {
        if(head == nullptr or head->next == nullptr)
        {
            return head;
        }
        
        ListNode* curr = head->next , *prev = head;
        head = curr;
        
        while(true)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            
            if(temp == nullptr or temp->next == nullptr)
            {
                prev->next = temp;
                break; 
            }
            
            prev->next = temp->next;
            prev = temp;
            curr = temp->next;
        }
        return head;
    }
};