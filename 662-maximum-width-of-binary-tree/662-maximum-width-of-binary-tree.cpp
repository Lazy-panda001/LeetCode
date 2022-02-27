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
    int widthOfBinaryTree(TreeNode* root) 
    {
        if(root == nullptr)
        {
            return 0;
        }
        
        queue<pair<TreeNode* , int>> qu;
        qu.push({root , 0});
        
        long long max_width = 0;
        
        while(!qu.empty())
        {
            int size = qu.size();
            
            long long left_range = qu.front().second;
          
            
            long long right_range = 0; // start with 0 for eac level
            for(int i=0; i<size; i++)
            {
                auto it = qu.front(); qu.pop();
                TreeNode* curr= it.first;
                right_range = it.second;
                
                if(curr->left != nullptr)
                {
                    qu.push({curr->left , 2*right_range+1});
                }
                
                if(curr->right != nullptr)
                {
                    qu.push({curr->right , 2*right_range+2});
                }
            }
            
            max_width = max( max_width , right_range - left_range+1);
        }
        
        return max_width;
        
    }
};