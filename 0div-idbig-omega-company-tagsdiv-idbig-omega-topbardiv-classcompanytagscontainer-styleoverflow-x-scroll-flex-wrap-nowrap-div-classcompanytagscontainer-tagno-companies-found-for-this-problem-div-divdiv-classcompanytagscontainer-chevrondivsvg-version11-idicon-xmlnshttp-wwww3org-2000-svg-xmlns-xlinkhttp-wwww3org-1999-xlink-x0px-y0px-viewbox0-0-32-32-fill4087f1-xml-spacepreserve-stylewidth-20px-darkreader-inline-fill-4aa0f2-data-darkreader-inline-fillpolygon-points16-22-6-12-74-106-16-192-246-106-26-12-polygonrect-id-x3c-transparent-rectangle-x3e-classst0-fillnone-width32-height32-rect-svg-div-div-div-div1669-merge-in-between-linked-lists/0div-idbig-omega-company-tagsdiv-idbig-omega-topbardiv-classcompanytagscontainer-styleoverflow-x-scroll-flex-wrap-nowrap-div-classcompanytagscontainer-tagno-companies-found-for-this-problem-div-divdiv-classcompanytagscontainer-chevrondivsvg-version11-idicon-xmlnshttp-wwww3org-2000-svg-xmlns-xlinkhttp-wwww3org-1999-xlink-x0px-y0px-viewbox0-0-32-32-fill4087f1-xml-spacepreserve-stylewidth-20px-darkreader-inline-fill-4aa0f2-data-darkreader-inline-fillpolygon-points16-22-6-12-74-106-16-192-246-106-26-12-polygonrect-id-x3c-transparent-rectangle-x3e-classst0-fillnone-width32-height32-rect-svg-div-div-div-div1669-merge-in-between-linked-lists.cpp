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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list1;
        
        ListNode* aNode = nullptr;
        ListNode* bNode = nullptr;
        
        while(--a) {
            temp1 = temp1->next;
        }
        
        while(b+1) {
            temp2 = temp2->next;
            b--;
        }
        
        cout<<temp2->val<<endl;
        
        ListNode* temp = list2;
        
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        
        temp1->next = list2;
        temp->next = temp2;
        
        return list1;
        
    }
};