/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* d=new Node(0);
        Node* ans=d;
        Node* x=d;
        Node* h=head;
        map<Node*,Node*> m;
      
        while(h!=NULL){
           
                Node* t=new Node(h->val);
                m[h]=t;
                d->next=t;
                d->random=NULL;
                d=d->next;
                h=h->next;

            
          

         
        }
        d->next=NULL;
        d->random=NULL;

        // random
        x=x->next;
        while(x!=NULL){
Node * u=head->random;
if(u!=NULL){
    x->random=m[u];

}
else{
    x->random=NULL;
}
x=x->next;
head=head->next;
        }
        return ans->next;
    }
};