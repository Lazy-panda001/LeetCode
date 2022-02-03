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
    
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) 
    {
    int len1 = find_length(head1);
    int len2 = find_length(head2);
    
    int diff=0;
    ListNode* temp1 , *temp2;  // for making perectly
    
    if(len1 > len2)
    {
        diff = len1 - len2;
        temp1 = head1;  // major confusing place
        temp2 = head2;
    }
    else
    {
        diff = len2 - len1;  
        temp1 = head2;  // major confusing place
        temp2 = head1; 
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