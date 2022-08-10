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
    
    TreeNode* createTree(vector<int>nums, int start, int end)
    {
        if( start > end)
        {
            return nullptr;
        }
        
        int mid = start + (end - start)/2; // find middle all the time to make root
        
        TreeNode* root = new TreeNode(nums[mid]); // make it root
        
        root->left = createTree(nums, start, mid-1);
        
        root->right = createTree(nums, mid+1, end);
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        if(nums.size() == 0)
        {
            return nullptr;
        }
       return createTree(nums, 0, nums.size()-1);
    }
    
};