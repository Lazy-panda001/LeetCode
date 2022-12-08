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
    
    void func(TreeNode* root, vector<int> &res)
    {
        if(root == nullptr)
        {
            return;
        }
        
        // leaf condition
        if(root->left == nullptr and root->right == nullptr)
        {
            res.push_back(root->val);
        }
        
        func(root->left, res);
        func(root->right, res);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        if(root1 == nullptr and root2 == nullptr)
        {
            return true;
        }
        
        if(root1 == nullptr)
        {
            return false;
        }
        if(root2 == nullptr)
        {
            return false;
        }
        
        vector<int> tree1;
        vector<int> tree2;
        
        func(root1, tree1);
        func(root2, tree2);
        
        for(auto it : tree1)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        
        for(auto it : tree2)
        {
            cout<<it<<" ";
        }
        
        if(tree1.size() != tree2.size())
        {
            return false;
        }
        
        for(int i=0; i<tree1.size(); i++)
        {
            if(tree1[i] != tree2[i])
            {
                return false;
            }
        }
    
        return true;
    }
};