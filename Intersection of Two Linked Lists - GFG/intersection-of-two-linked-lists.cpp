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


 // } Driver Code Ends
/* structure of list node:

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

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        // code here
       // return the head of intersection list
       unordered_set<int> s;
       while(head2)
       {
           s.insert(head2->data);
           head2=head2->next;
       }
       vector<int> v;
       while(head1)
       {
           if(s.find(head1->data)!=s.end())
           v.push_back(head1->data);
           head1=head1->next;
       }
       if(v.size()==0)
       return NULL;
       Node *head=new Node(v[0]);
       Node *curr=head;
       for(int i=1;i<v.size();i++)
       {
           Node *temp=new Node(v[i]);
           curr->next=temp;
           curr=curr->next;
       }
       curr->next=NULL;
       return head;
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
  // } Driver Code Ends