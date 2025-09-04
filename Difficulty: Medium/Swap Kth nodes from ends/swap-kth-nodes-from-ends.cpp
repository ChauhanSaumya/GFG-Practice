/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        int n=0;
        Node*t=head;
        while(t)n++,t=t->next;
        if(k>n || 2*k-1==n)return head;
        Node*a=head,*b=head,*pa=0,*pb=0;
        for(int i=1;i<k;i++)pa=a,a=a->next;
        for(int i=1;i<n-k+1;i++)pb=b,b=b->next;
        if(pa)pa->next=b;else head=b;
        if(pb)pb->next=a;else head=a;
        Node*tmp=a->next;
        a->next=b->next;
        b->next=tmp;
        return head;
    }
};