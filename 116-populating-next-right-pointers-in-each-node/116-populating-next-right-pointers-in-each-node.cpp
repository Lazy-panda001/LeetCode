/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        if(root == nullptr)
        {
            return nullptr;
        }
        
        queue<Node*> qu;
        qu.push(root);
        qu.push(nullptr);
        
        while(!qu.empty())
        {
            int size = qu.size();
            
            for(int i=0; i<size; i++)
            {
                Node* temp = qu.front();
                qu.pop();
                
                if(temp)
                {
                    temp->next = qu.front();
                    if(temp->left)
                    {
                        qu.push(temp->left);
                    }
                    if(temp->right)
                    {
                        qu.push(temp->right);
                    }
                }
                else if(temp == nullptr and !qu.empty())
                {
                    qu.push(nullptr);
                }
            }
        }
        
        return root;
    }
};