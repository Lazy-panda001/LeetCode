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
class Solution 
{
public:
    
    bool dfs(TreeNode* root , ListNode* head)
    {
        if(head == nullptr)
            return true;
        if(root == nullptr or root->val != head->val)
            return false;
        return dfs(root->left , head->next) || dfs(root->right , head->next);
    }
    
    
    bool isSubPath(ListNode* head, TreeNode* root) 
    {
        if(head == nullptr)
        {
            return false;
        }
        if(root == nullptr)
        {
            return false;
        }
        
        if(dfs(root , head) == true)
        {
            return true;
        }
        
        bool cal1 = isSubPath(head , root->left);
        bool cal2 = isSubPath(head , root->right);
        return cal1 or cal2;
    }
};