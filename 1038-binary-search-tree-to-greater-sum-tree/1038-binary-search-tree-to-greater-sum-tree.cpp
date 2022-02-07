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
    
    TreeNode* reverse_inorder(TreeNode* root, int &node_sum)
    {
        if(root == nullptr)
        {
            return nullptr;
        }
        
        reverse_inorder(root->right , node_sum);
        
        root->val = root->val + node_sum;
        node_sum = root->val;
        
        reverse_inorder(root->left , node_sum);
        
        return root;
    }
    
    TreeNode* bstToGst(TreeNode* root) 
    {
        int node_sum = 0;
        return reverse_inorder(root , node_sum);
        
    }
};