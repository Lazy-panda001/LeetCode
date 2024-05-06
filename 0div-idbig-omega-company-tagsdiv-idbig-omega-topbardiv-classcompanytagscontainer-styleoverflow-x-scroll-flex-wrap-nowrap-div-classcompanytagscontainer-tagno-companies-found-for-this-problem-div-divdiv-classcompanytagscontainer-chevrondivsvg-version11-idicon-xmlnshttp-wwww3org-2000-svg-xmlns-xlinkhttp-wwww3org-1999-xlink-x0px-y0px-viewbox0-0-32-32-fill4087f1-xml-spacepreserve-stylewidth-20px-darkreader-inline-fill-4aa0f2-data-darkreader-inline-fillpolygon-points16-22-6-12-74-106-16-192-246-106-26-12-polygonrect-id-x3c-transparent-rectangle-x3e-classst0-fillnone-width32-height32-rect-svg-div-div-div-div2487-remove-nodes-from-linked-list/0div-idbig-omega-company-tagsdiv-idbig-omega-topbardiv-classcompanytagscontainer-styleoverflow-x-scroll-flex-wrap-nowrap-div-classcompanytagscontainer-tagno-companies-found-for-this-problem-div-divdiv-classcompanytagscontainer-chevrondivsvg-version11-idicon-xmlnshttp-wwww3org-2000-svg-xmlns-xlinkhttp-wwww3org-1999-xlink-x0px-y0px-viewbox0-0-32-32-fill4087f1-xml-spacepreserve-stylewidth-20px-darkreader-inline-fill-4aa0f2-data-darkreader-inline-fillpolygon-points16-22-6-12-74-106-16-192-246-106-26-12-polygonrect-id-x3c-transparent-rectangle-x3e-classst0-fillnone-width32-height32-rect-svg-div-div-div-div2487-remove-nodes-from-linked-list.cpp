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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> stk;
        ListNode* curr = head;
        
        while(curr != nullptr) {
            stk.push(curr);
            curr = curr->next;
        }
        
        curr = stk.top();
        stk.pop();
        int maxV = curr->val;
        
        ListNode* resultH = new ListNode(curr->val);
        
        while(!stk.empty()) {
            curr = stk.top();
            stk.pop();
            
            if(curr->val < maxV) {
                continue;
            }
            else {
                ListNode* newNode = new ListNode(curr->val);
                newNode->next = resultH;
                resultH = newNode;
                maxV = curr->val;
            }
        }
        return resultH;
    }
};