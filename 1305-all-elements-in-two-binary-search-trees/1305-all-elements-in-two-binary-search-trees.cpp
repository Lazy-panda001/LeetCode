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
    
    void inorder(TreeNode* root , vector<int> &list)
    {
        if(root == nullptr)
        {
            return;
        }
        else
        {
            inorder(root->left, list);
            list.push_back(root->val);
            inorder(root->right , list);
        }
        return;
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> list1; // for 1st tree
        inorder(root1 , list1);
        
        vector<int>list2;  // for 2nd list
        inorder(root2, list2);
        
        vector<int> merge(list1.size() + list2.size());
        
        int i=0, j=0, k=0;
        
        while(i<list1.size() and j < list2.size())
        {
            if(list1[i] <= list2[j])
            {
                merge[k] = list1[i];
                k++;
                i++;
            }
            else if(list2[j] <= list1[i])
            {
                merge[k] = list2[j];
                k++;j++;
            }
        }
        
        while(i<list1.size())
        {
            merge[k++] = list1[i++];
        }
        while(j < list2.size())
        {
            merge[k++] = list2[j++];
        }
        
        return merge;
      
        
        /*for(auto it:list1)
        {
            merge.push_back(it);
        }
        for(auto it : list2)
        {
            merge.push_back(it);
        }
        
        sort(merge.begin(), merge.end());
        
        return merge;*/
    }
};