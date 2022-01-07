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
    ListNode* curr;
    Solution(ListNode* head) 
    {
        curr = head;
        
    }
    
    int getRandom() 
    {
        ListNode *temp = curr;
        int pos=1;
        int res;
        
        while(temp)
        {
            if(rand() % pos == 0)
            {
                res =temp->val;
            }
            temp = temp->next;
            pos++;
            
        }
        
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */