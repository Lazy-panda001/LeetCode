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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int>> res;
        if(root == nullptr)
        {
            return res;
        }
        
        queue<TreeNode*> qu;
        qu.push(root);
        
        int x = 0;
        
        while(!qu.empty())
        {
            int size = qu.size();
            vector<int> level;
            
            for(int i=0; i<size; i++)
            {
                TreeNode* curr = qu.front();
                qu.pop();
                
                level.push_back(curr->val);
                
                if(curr->left)
                {
                    qu.push(curr->left);
                }
                if(curr->right)
                {
                    qu.push(curr->right);
                }
            }
            
            // zigzag k liya condition .. baki kuch nahi hay question me
            if(x %2 ==0)
            {
                res.push_back(level);
            }
            else
            {
                reverse(level.begin(),level.end());
                res.push_back(level);
            }
            x++;
        }
        
        return res;
        
    }
};