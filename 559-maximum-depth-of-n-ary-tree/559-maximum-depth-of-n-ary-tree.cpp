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
    int maxDepth(Node* root) 
    {
        if(root == nullptr)
        {
            return 0;
        }
        
        int depth = 0;
        
        queue<Node*> qu;
        qu.push(root);
        
        while(!qu.empty())
        {
            int size = qu.size();
            
            for(int i=0; i<size; i++)
            {
                Node* curr = qu.front();
                qu.pop();
                
                
                for(auto child : curr->children)
                {
                    qu.push(child);
                }
            }
            
            depth++;
        }
        return depth;
    }
};