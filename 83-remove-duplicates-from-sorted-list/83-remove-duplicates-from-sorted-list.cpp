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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head == nullptr)
        {
            return head;
        }
        
        ListNode* curr_node = head;
        ListNode* next_node;
        
        while(curr_node->next != nullptr)
        {
            if(curr_node->val == curr_node->next->val)
            {
                next_node = curr_node->next->next;
                delete curr_node->next;
                curr_node->next = next_node;
            }
            else
            {
                curr_node = curr_node->next;
            }
        }
        
        return head;
        
    }
};