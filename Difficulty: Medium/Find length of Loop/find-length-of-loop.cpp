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
    int lengthOfLoop(Node *head) {
        // code here
        Node*a=head,*b=head;
        while(b && b->next)
        {
            a=a->next;
            b=b->next->next;
        if(a==b)
        {
            int t=1;
            b=b->next;
            while(a!=b)b=b->next,t++;
            return t;
        }
    }
     return 0;   
    }
};