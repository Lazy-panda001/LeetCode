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
        vector<int> nodes;
        ListNode* temp = head;
        
        while(temp)
        {
            nodes.push_back(temp->val);
            temp = temp->next;
        }
        
        for(int i=1; i<nodes.size(); i = i+2)
        {
            swap(nodes[i-1],nodes[i]);
        }
        
        for(auto it:nodes)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        int i=0;
        int size = nodes.size();
        while(size--)
        {
            ListNode* curr = new ListNode(nodes[i++]);
            prev->next = curr;
            prev = prev->next;
        }
        
        
        
        return dummy->next;
        
    }
};