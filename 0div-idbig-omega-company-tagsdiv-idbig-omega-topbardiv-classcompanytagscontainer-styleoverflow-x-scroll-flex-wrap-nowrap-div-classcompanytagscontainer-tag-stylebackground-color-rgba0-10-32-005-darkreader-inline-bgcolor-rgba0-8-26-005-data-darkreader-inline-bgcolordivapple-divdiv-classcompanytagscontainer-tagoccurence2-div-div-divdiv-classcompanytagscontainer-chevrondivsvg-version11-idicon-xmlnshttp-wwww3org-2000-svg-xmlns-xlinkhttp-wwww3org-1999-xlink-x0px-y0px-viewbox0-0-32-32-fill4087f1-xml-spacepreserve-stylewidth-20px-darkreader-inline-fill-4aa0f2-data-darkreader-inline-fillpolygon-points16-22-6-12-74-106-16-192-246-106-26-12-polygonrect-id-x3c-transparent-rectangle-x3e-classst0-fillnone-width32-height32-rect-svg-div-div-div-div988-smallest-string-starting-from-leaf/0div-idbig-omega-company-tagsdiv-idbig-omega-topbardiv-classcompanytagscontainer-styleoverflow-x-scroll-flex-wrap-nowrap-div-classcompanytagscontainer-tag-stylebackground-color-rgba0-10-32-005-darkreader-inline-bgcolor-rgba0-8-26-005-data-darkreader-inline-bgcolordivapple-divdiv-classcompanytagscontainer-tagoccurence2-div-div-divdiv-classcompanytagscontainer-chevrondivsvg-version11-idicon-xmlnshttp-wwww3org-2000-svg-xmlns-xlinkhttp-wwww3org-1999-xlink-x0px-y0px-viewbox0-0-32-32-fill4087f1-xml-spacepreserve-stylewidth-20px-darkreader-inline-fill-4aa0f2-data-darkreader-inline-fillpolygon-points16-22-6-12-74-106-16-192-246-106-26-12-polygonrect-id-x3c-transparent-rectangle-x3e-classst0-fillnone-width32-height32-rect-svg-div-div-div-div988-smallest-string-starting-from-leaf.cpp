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
    
    string res="";
    
    void func(TreeNode* root , string str) {
        if(root == nullptr) {
            return;
        }
        
        str = char(root->val + 'a') + str;
        
        if(root->left == nullptr and root->right == nullptr) {
            if(res == "" or res > str) {
                res = str;
            }
        }
      func(root->left, str);
      func(root->right, str);
    }
    
    string smallestFromLeaf(TreeNode* root) {
        
        string str="";
        if(root == nullptr) {
            return str;
        }
        
        func(root, str);
        
        return res;
    }
};