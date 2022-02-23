/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    void dfs(Node* original_graph_node, Node* copy_graph_node, vector<Node*>&visited)
    {
        visited[copy_graph_node->val] = copy_graph_node;
        
        for(auto nbr : original_graph_node->neighbors)
        {
            if(visited[nbr->val] == nullptr)
            {
                Node* newNode_in_copy_graph = new Node(nbr->val);
                (copy_graph_node->neighbors).push_back(newNode_in_copy_graph);
                dfs(nbr , newNode_in_copy_graph , visited);
            }
            else
            {
                (copy_graph_node->neighbors).push_back(visited[nbr->val]);
            }   
        }
        
        return;
        
    }
    
    Node* cloneGraph(Node* original_graph_node) 
    {
        if(original_graph_node == nullptr)
        {
            return nullptr;
        }
        
        vector<Node*> visited(1000, nullptr);
        Node* copy_graph_node = new Node(original_graph_node->val);
        
        dfs(original_graph_node , copy_graph_node, visited);
        return copy_graph_node;
        
    }
};