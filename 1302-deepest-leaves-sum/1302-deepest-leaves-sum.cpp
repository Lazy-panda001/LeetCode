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
    int deepestLeavesSum(TreeNode* root) 
    {
        queue<TreeNode*> qu;
        qu.push(root);
        int level_sum=0;
        while(!qu.empty())
        {
            level_sum=0;
            int len = qu.size();
            for(int i=0; i<len; i++)
            {
                TreeNode* curr = qu.front();
                qu.pop();
                level_sum += curr->val;
                if(curr->left) qu.push(curr->left);
                if(curr->right) qu.push(curr->right);
            }
        }
        return level_sum;
        
    }
};