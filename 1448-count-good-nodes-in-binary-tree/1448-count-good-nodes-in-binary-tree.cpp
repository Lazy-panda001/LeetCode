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
    
    int total_good = 0;
    
    
    void dfs(TreeNode* root, int node_val)
    {
        if(root == nullptr)
        {
            return;    
        }
        
        if(root->val >= node_val)
        {
            total_good++;
        }
        
        node_val = max(root->val, node_val);
        
        dfs(root->left , node_val);
        dfs(root->right, node_val);
    }
        
    
    int goodNodes(TreeNode* root) 
    {
        if(root == nullptr)
        {
            return 0;
        }
        
        dfs(root,root->val);
        
        return total_good;
    }
};