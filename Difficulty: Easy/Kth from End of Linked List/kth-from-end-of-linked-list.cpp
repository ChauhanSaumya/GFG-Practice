/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node*a=head,*b=head;
        while(k-- && b)b=b->next;
        if(k>=0)return -1;
        while(b)a=a->next,b=b->next;
        return a->data;
    }
};