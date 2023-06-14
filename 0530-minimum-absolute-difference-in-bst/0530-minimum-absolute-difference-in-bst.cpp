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
    
    void Inorder(TreeNode* root , vector<int>& inorder)
	{
	    if(root == nullptr)
	    {
	        return;
	    }
	    
	    Inorder(root->left , inorder);
	    inorder.push_back(root->val);
	    Inorder(root->right, inorder);
	    
	    return;
	}
	
    
    int getMinimumDifference(TreeNode* root) 
    {
        vector<int> inorder;
        Inorder(root , inorder);
        
        int min_dif = INT_MAX;
        
        for(int i=1; i<inorder.size(); i++)
        {
            min_dif = min ( min_dif ,  abs(inorder[i] - inorder[i-1])  ) ;
        }
        
        return min_dif;
        
    }
};