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
    int res=0;
    
    void func(TreeNode* root, int max_val, int min_val)
    {
        if(root == nullptr)
        {
            return;
        }
        
        int temp = max(abs(root->val - max_val), abs(root->val - min_val));
        res = max(res, temp);
        
        max_val = max(max_val, root->val);
        min_val = min(min_val, root->val);
        
        func(root->left, max_val, min_val);
        func(root->right, max_val, min_val);
        
    }
    
    int maxAncestorDiff(TreeNode* root) 
    {
        if(root == nullptr)
        {
            return 0;
        }
        
        func(root,root->val, root->val);
        
        return res;
    }
};