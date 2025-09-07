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
   struct cmp
   {
       bool operator()(Node* a,Node*b)
       {
           return a->data > b->data;
       }
   };
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
     priority_queue<Node*,vector<Node*>,cmp>pq;
     for(auto x:arr)if(x) pq.push(x);
     Node* d=new Node(0),*t=d;
     while(!pq.empty())
     {
         auto n=pq.top();pq.pop();
         t->next=n;t=t->next;
         if(n->next) pq.push(n->next);
     }
     return d->next;
    }
};