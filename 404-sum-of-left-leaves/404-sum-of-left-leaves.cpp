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
    int sumOfLeftLeaves(TreeNode* root) 
    {
        queue<TreeNode*> qu;
        qu.push(root);
        
        int sum = 0;
        while(!qu.empty())
        {
            int size = qu.size();
            for(int i=0; i<size; i++)
            {
                TreeNode* curr = qu.front(); qu.pop();
                
                if(curr->left)
                {
                    // extra condition  as per the question
                    if(curr->left->left ==nullptr and curr->left->right ==nullptr)
                    {
                        sum +=curr->left->val;
                    }
                    qu.push(curr->left);
                }
                if(curr->right)
                {
                    qu.push(curr->right);
                }
            }
        }
        return sum;
    }
};