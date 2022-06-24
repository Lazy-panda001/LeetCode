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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> res;
        if(root == nullptr)
            return res;
        
        queue<TreeNode*> qu;
        
        qu.push(root);
        
        while(!qu.empty())
        {
            vector<int> level;
            
            int size = qu.size();
            
            for(int i=0; i<size; i++)
            {
                TreeNode* curr = qu.front();
                qu.pop();
                
                level.push_back(curr->val);
                
                if(curr->left != nullptr)
                {
                    qu.push(curr->left);
                }
                
                if(curr->right != nullptr)
                {
                    qu.push(curr->right);
                }
            }
            
            res.push_back(level);
            
        }
        
        return res;
        
        
    }
};