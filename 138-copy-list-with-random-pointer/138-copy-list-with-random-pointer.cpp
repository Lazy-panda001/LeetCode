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
        unordered_map<Node*,Node*> ump;
        Node* nhead = new Node(-1);
        Node* prev = nhead;
        Node* curr = head;
        while(curr != nullptr)
        {
            Node* temp = new Node(curr->val);
            prev->next = temp;
            
            ump.insert({curr , temp});
            
            prev = prev->next;
            curr = curr->next;
        }
        
        nhead = nhead->next;
        
        Node* c1 = head;
        Node* c2 = nhead;
        
        while(c1 != nullptr)
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