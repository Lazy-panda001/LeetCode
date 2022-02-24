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
    int preInd=0;
    
    TreeNode* createTree(vector<int>& preorder, vector<int>& inorder, int start , int end)
    {
        if(start > end)
        {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(preorder[preInd++]);
        
        int pos = 0;
        for(int i=start ;i<=end; i++)
        {
            if(inorder[i] == root->val)
            {
                pos = i;
                break;
            }
        }
        
        root->left = createTree(preorder,inorder,start,pos-1);
        root->right = createTree(preorder, inorder , pos+1, end);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        return createTree(preorder, inorder, 0, inorder.size()-1);
    }
};