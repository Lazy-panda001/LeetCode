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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    ListNode* findMiddle(ListNode* head)
    {
        ListNode* slow = head, *fast = head, *prev= head;
        
        while(fast and fast->next != nullptr)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(prev != nullptr)
        {
            prev->next = nullptr;
        }
        
        return slow;
    }
    TreeNode* sortedListToBST(ListNode* head) 
    {
        if(head == nullptr)
        {
            return nullptr;
        }
        
        ListNode* mid = findMiddle(head);
        TreeNode* root = new TreeNode(mid->val);
        
        if(head == mid)
        {
            return root;
        }
        
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(mid->next);
        
        return root;
        
    }
};