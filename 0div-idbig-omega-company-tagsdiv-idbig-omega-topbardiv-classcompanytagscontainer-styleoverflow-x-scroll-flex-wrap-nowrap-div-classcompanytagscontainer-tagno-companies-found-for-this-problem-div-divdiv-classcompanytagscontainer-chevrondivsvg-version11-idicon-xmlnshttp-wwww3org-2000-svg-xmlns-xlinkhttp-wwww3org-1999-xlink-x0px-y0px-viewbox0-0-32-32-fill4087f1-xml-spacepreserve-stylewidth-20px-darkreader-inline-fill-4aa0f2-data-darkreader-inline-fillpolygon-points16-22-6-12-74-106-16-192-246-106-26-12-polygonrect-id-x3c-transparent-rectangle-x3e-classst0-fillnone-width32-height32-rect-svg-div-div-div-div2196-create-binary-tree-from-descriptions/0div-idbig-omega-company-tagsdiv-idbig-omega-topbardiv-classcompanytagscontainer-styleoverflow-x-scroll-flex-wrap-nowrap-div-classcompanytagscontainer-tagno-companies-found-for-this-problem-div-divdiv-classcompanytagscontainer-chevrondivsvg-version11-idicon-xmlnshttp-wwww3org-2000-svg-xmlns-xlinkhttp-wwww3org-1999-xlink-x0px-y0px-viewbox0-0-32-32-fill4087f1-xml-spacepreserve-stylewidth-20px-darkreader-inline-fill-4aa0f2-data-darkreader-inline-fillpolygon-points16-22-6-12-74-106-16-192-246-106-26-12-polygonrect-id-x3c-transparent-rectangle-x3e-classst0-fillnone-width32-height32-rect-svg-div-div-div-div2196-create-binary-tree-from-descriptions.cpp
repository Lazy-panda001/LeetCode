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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> ump;
        unordered_set<int>childSet;
        
        for(vector<int> &vec : descriptions)
        {
            int parent = vec[0];
            int child = vec[1];
            int isLeft = vec[2];
            
            if(ump.find(parent) == ump.end())
            {
                ump[parent] = new TreeNode(parent);
            }
            
            if(ump.find(child) == ump.end())
            {
                ump[child] = new TreeNode(child);
            }
            
            if(isLeft == 1)
            {
                ump[parent]->left = ump[child];
            }
            else
            {
                ump[parent]->right = ump[child];
            }
            
            childSet.insert(child);
        }
        
        for(vector<int> &vec : descriptions)
        {
            int parent = vec[0];
            
            if(childSet.find(parent) == childSet.end())
            {
                return ump[parent];
            }
        }
        return NULL;
    }
};