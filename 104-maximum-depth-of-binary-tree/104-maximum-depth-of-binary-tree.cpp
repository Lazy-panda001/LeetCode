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
    int maxDepth(TreeNode* root) 
    {
        int depth=0;
        
        if(root == nullptr)
        {
            return 0;
        }
        
        queue<TreeNode*> qu;
        qu.push(root);
        
        while(!qu.empty())
        {
            int size = qu.size();
            
            for(int i=0; i<size; i++)
            {
                TreeNode* curr = qu.front(); qu.pop();
                
                if(curr->left)
                {
                    qu.push(curr->left);
                }
                
                if(curr->right)
                {
                    qu.push(curr->right);
                }
            }
            
            depth++;
        }
        
        return depth;
        
    }
};