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
    
    TreeNode* createTree(vector<int>&postorder, vector<int>&inorder, int root_index, int start, int end)
    {
        
        if(start > end)
        {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(postorder[root_index]);
        int pos;
        
        for(int i=start; i<= end; i++)
        {
            if(inorder[i] == root->val)
            {
                pos = i;
                break;
            }
        }
        
        root->left = createTree(postorder,inorder, root_index - 1 +  pos - end,  start,   pos-1);
        root->right = createTree(postorder,inorder,root_index-1 , pos+1, end);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int n = postorder.size()-1;
        int start = 0;
        int end = inorder.size()-1;
        
        return createTree(postorder,inorder,n,start,end);
        
    }
};