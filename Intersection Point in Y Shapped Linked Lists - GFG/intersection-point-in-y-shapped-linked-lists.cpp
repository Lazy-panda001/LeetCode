// { Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int find_length(Node* head)
{
    int len=0;
    while(head)
    {
        len++;
        head = head->next;
    }
    
    return len;
}

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int len1 = find_length(head1);
    int len2 = find_length(head2);
    
    int diff=0;
    Node* temp1 , *temp2;
    
    if(len1 > len2)
    {
        diff = len1 - len2;
        temp1 = head1;
        temp2 = head2;
    }
    else
    {
        diff = len2 - len1;
        temp1 = head2;
        temp2 = head1; 
    }
    
    while(diff--)
    {
        temp1 = temp1->next;
    }
    
    if(temp1 == temp2)
    {
        return temp1->data;
    }
    
    while(temp1 and temp2)
    {
        if(temp1->next == temp2->next)
        {
            return temp1->next->data;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    
    return -1;
}

