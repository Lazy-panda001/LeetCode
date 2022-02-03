// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


 // } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    
    Node* middle(Node* head)  // find mid 
 {
    if(head == nullptr || head->next == nullptr)
    {
        return head;
    }
    Node* slow = head;
    Node* fast = head;
    
    while(fast->next and fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
 }
 
 Node* mergeList(Node* l1 , Node* l2) // merge code
 {if(l1 == nullptr and l2 == nullptr) 
      {
        return nullptr;
      }
  
      if(l1 == nullptr) return l2;
      if(l2 == nullptr) return l1;
    
      
      Node* dummy = new Node(-1);
      Node* prev = dummy;
      
      Node* temp1 = l1;
      Node* temp2 = l2;
      
      while(temp1 != nullptr and temp2 != nullptr)
      {
        if(temp1->data < temp2->data)
        {
          prev->next = temp1;
          temp1 = temp1->next;
        }
        else
        {
          prev->next = temp2;
          temp2 = temp2->next;
        }
       prev = prev->next;   
      }
      
      if(temp1 != nullptr)
      {
        prev->next = temp1;
      }
      else
        prev->next = temp2;
     // prev->next = temp1 ? temp1 : temp2;
      
    return dummy->next;
 }
 
    Node* segregate(Node *head) 
    {
        
        // Add code here
    if(head == nullptr or head->next == nullptr)
      {
        return head;
      }
      
      Node* mid = middle(head);
      Node* nhead = mid->next;
      mid->next = nullptr;
      
      Node* l1 = segregate(head);
      Node* l2 = segregate(nhead);
      
      return mergeList(l1,l2);
        
    }
};


// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, dataue, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &dataue);

        if (i == 0) {
            start = new Node(dataue);
            temp = start;
            continue;
        } else {
            temp->next = new Node(dataue);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  // } Driver Code Ends