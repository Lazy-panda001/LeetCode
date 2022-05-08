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
    
    void calculate(TreeNode* root, int &res)
    {
        int sum=0, count=0;
        queue<TreeNode*> qu;
        qu.push(root);
        
        while(!qu.empty())
        {
            TreeNode* curr = qu.front();
            qu.pop();
            
            sum = sum + curr->val;
            
            count++;
            
            if(curr->left)
                qu.push(curr->left);
            if(curr->right)
                qu.push(curr->right);
        }
        
        if( sum / count == root->val)
            res++;
    }
    
    int averageOfSubtree(TreeNode* root) 
    {
        int count=0;
        queue<TreeNode*> qu;
        qu.push(root);
        
        while(!qu.empty())
        {
            TreeNode* curr = qu.front();
            qu.pop();
            
            calculate(curr,count);
            
            if(curr->left)
            {
                qu.push(curr->left);
            }
            if(curr->right)
            {
                qu.push(curr->right);
            }
        }
        return count;
        
    }
};