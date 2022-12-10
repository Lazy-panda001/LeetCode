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
    long total_sum = 0;
    long maxproduct = 0;
    
    long mod = 1e9+7;
    
    long cal_maxProduct(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        
        long l = cal_maxProduct(root->left);
        long r = cal_maxProduct(root->right);
        
        long SubTree1_Sum = l + r + root->val;
        
        long SubTree2_Sum = (total_sum - SubTree1_Sum);
        
        maxproduct = max(maxproduct , (SubTree1_Sum*SubTree2_Sum) );
        
        return SubTree1_Sum;
        
    }
    
    
    void cal_totalSum(TreeNode* root)
    {
        if(root == nullptr)
        {
            return;
        }
        
        cal_totalSum(root->left);
        cal_totalSum(root->right);
        
        total_sum +=root->val;
        
    }
    
    int maxProduct(TreeNode* root) 
    {
        cal_totalSum(root);
        cal_maxProduct(root);
        
        return maxproduct % mod;
        
    }
};