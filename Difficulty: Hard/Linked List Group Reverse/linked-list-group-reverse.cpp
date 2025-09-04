/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
  Node* rev(Node*h,int k)
  {
      Node*p=0,*c=h,*n=0;
      while(k-- && c)
      {
          n=c->next;
          c->next=p;
          p=c;
          c=n;
      }
      h->next=c;
      return p;
  }
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if(!head || k<2)return head;
        Node*d=new Node(0);
        d->next=head;
        Node*p=d,*a=head,*b=head;
        int cnt=0;
        while(b)
        {
            cnt++;
            b=b->next;
        }
        b=head;
        while(cnt>=k)
        {
            Node*t=b;
            for(int i=1;i<k;++i)t=t->next;
            Node*nxt=t->next;
            t->next=0;
            p->next=rev(b,k);
            b->next=nxt;
            p=b;
            b=nxt;
            cnt-=k;
        }
        if(cnt)p->next=rev(b,cnt);
        return d->next;
    }
};