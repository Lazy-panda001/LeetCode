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
    
    bool isSameTree(TreeNode* p , TreeNode* q)
    {
        if(!p and !q)
        {
            return true;
        }
       
        if((p and q==nullptr) || (p==nullptr and q))
           {
               return false;
           }
           
        
        int c1, c2;
        
        if(p->val == q->val)
        {
            c1 = isSameTree(p->left , q->right);
            c2 = isSameTree(p->right , q->left);
            return c1 && c2;
        }
        
        return false;
    }
    
    bool isSymmetric(TreeNode* root) 
    {
        if(root == nullptr)
        {
            return true;
        }
        
        return isSameTree(root->left , root->right);
        
    }
};