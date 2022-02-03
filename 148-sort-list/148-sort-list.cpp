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
  ListNode* middle(ListNode* head)  // find mid 
 {
    if(head == nullptr || head->next == nullptr)
    {
        return head;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    
    while(fast->next and fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
 }
 
 ListNode* mergeList(ListNode* l1 , ListNode* l2) // merge code
 {if(l1 == nullptr and l2 == nullptr) 
      {
        return nullptr;
      }
  
      if(l1 == nullptr) return l2;
      if(l2 == nullptr) return l1;
    
      
      ListNode* dummy = new ListNode(-1);
      ListNode* prev = dummy;
      
      ListNode* temp1 = l1;
      ListNode* temp2 = l2;
      
      while(temp1 != nullptr and temp2 != nullptr)
      {
        if(temp1->val < temp2->val)
        {
          prev->next = temp1;
          temp1 = temp1->next;
        }
        else
        {
          prev->next = temp2;
          temp2 = temp2->next;
        }
       prev = prev->next;   
      }
      
      if(temp1 != nullptr)
      {
        prev->next = temp1;
      }
      else
        prev->next = temp2;
     // prev->next = temp1 ? temp1 : temp2;
      
    return dummy->next;
 }
    ListNode* sortList(ListNode* head)  // merge sort
    {
      if(head == nullptr or head->next == nullptr)
      {
        return head;
      }
      
      ListNode* mid = middle(head);
      ListNode* nhead = mid->next;
      mid->next = nullptr;
      
      ListNode* l1 = sortList(head);
      ListNode* l2 = sortList(nhead);
      
      return mergeList(l1,l2);
        
    }
};