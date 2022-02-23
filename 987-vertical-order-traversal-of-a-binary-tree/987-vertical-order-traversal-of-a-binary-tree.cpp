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
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        // BFS + Hash map
        vector<vector<int>> res;
        if(root == nullptr)
        {
            return res;
        }
        
        queue<pair<TreeNode* , int>> qu;
        qu.push({root , 0}); // (root , hd)
        
        map<int, vector<int>> ump;
        
        while(!qu.empty())
        {
            int size = qu.size();
            
            map<int, vector<int>> ump1;  // for each level this map will use
            
            for(int i=0; i<size; i++)
            {
                TreeNode* curr = qu.front().first;  // pop first entry time ,, it has two parts
                int hd = qu.front().second;
                qu.pop();
                
                ump1[hd].push_back(curr->val);
                
                if(curr->left)
                {
                    qu.push({curr->left , hd-1});
                }
                if(curr->right)
                {
                    qu.push({curr->right , hd+1});
                }
            }
            
            for(auto it : ump1)
            {
                sort(it.second.begin(), it.second.end());
                
                ump[it.first].insert(ump[it.first].end() ,it.second.begin(), it.second.end());
            }
        }
        
        for(auto it : ump)
        {
            res.push_back(it.second);
        }
        
        return res;
        
    }
};