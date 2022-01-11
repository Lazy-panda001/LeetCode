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
    vector<vector<string>> res; // for storing all binary string in a vector
    vector<string> path;  // storing each binary string 
    
    void func(TreeNode* root)
    {
        if(root == nullptr)
        {
            return;
        }
        
        path.push_back(to_string(root->val));
        
        func(root->left);
        func(root->right);
        
        if(root->left == nullptr and root->right == nullptr)
        {
            res.push_back(path);
        }
        
        path.pop_back();
    }
    
    
    int sumRootToLeaf(TreeNode* root) 
    {
        if(root == nullptr)
        {
            return 0;
        }
        
        string str ="";
        int sum=0;
        
        func(root);
        
        for(auto it:res)
        {
            str ="";
            for(int j=0; j<it.size(); j++)
            {
                str +=it[j];
            }
            sum +=stoi(str,0,2); // comment for convert string to integer : of a binary string 
           // cout<<sum<<" ";
        }
        
        return sum;
    }
};