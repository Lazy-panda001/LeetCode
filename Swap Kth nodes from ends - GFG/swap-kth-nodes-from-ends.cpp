// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
#include<bits/stdc++.h>


Node *swapkthnode(Node* head, int num, int K)
{
   if(K>num||(num%2==1 && K==(num/2)+1))
       return head;
    K = min(K, num-K+1);
    Node *ptr = head, *p, *q, *prev1 = NULL, *prev2 = NULL, *prev = NULL;
    int c = 0;
    while(ptr){
        c += 1;
        if(c == K){
            prev1 = prev;
            p = ptr;
        }
        if(c == num-K+1){
            prev2 = prev;
            q = ptr;
        }
        prev = ptr;
        ptr = ptr->next;
    }
    //cout << p->data << " " << q->data << " " << prev2->data << " " << prev1 << "\n";
    Node *tmp = q->next;
    if(prev1 && prev2 && (num+1)/2 == K){
        prev1->next = q;
        q->next = p;
        p->next = tmp;
    }
    else{
        if(prev1 == NULL){
            head = q;
            q->next = p->next;
        }
        else{
            prev1->next = q;
            q->next = p->next;
        }
        prev2->next = p;
        p->next = tmp;
    }
    return head;
}
