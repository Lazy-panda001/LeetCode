// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* l0, Node* l1)
{
    // Your Code Here
    Node* dummy = new Node(-1);
    Node* prev = dummy;

    while(l0 != nullptr and l1 != nullptr)
    {
        // if match happen
        if(l0->data == l1->data)
        {
            Node* temp = new Node(l0->data);
            prev->next = temp;
            prev = prev->next;
            l0 = l0->next;
            l1 = l1->next;
        }
        else if(l0->data < l1->data)
        {
            l0 = l0->next;
        }
        else
        {
            l1 = l1->next;
        }
    }
    return dummy->next;
}