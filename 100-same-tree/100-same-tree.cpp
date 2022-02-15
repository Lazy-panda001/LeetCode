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
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p == nullptr and q == nullptr)
        {
            return true;
        }
        
        if((p and q==nullptr) or (p==nullptr and q))
           {
               return false;
           }
           
           int c1,c2;
           if(p->val == q->val)
           {
               c1 = isSameTree(p->left , q->left);
               c2 = isSameTree(p->right , q->right);
               return c1 and c2;
           }
        return false;
    }
};