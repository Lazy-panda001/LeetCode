/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        vector<vector<int>> res;
        if(root == nullptr)
        {
            return res;
        }
        queue<Node*> qu;
        qu.push(root);
        
        while(!qu.empty())
        {
            int size = qu.size();
            vector<int> level;
            for(int i=0; i<size; i++)
            {
                Node* curr = qu.front(); qu.pop();
                level.push_back(curr->val);
                
                for(auto node : curr->children)
                {
                    qu.push(node);
                }
            }
            
            res.push_back(level);
            
        }
        return res;
        
    }
};