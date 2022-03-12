/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        // With space
        unordered_map<Node*,Node*> ump;
        
        Node* nhead = new Node(-1);  // making dummy node to create copy list again
        Node* prev = nhead;
        
        Node* curr = head;
        while(curr != nullptr)
        {
            Node* temp = new Node(curr->val);
            prev->next = temp;
            
            ump[curr] = temp;  // at the same time mapping with (old node and new node ==  a --> a')
            
            prev = prev->next;
            curr = curr->next;
        }
        
        nhead = nhead->next;
        
        Node* c1 = head;
        Node* c2 = nhead;
        
        
        while(c1 != nullptr)  // this part is for random address connection
        {
            if(c1->random != nullptr) 
            {
                c2->random = ump[c1->random]; 
            }
            else
            {
                c2->random = nullptr;
            }
            c1 = c1->next;
            c2 = c2->next;
        }
        
        return nhead;
    }
};