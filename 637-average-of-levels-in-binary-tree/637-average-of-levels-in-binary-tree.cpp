/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<double> averageOfLevels(TreeNode *root) 
        {
            //vector<vector<int>> res;
            vector<double> ans;
            
            queue<TreeNode*> qu;
            qu.push(root);
            
            while(!qu.empty())
            {
                double sum = 0;
               int len = 0;
                int size = qu.size();
                for(int i=0; i<size; i++)
                {
                    TreeNode* curr = qu.front(); qu.pop();
                    //level.push_back(curr->val);
                    sum = sum + curr->val;
                    len++;
                    
                    if(curr->left != nullptr)
                    {
                        qu.push(curr->left);
                    }
                    if(curr->right)
                    {
                        qu.push(curr->right);
                    }
                }
               // cout<<sum<<" "<<len<<endl;
        
                double x = sum / len;
                ans.push_back(x);
            }
            
            return ans;
        }
};