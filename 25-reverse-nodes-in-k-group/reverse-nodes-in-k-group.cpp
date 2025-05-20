/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
int len(ListNode* h){
    int cnt=0;
    while(h!=NULL){
        h=h->next;
        ++cnt;
    }
    
    return cnt;
}

ListNode* rev(ListNode* h){
    if(h==NULL||h->next==NULL) return h;
    ListNode* nh=rev(h->next);
   ListNode* f=h->next;
   f->next=h;
    h->next=NULL;
    return nh;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prev=new ListNode(0);
        prev->next=head;
        int size=len(head);
        int r=size/k;
        cout<<r;
        int k1=k;
        ListNode* temp;
        ListNode* temp1;
        int cnt=2;
if(k==1) return head;
if(head==nullptr) return head;
        ListNode* nextnode;
        while(r>0){
           temp=prev->next;
           temp1=prev->next;

           k1=k;
           while(--k1) {
            temp=temp->next;
           
           
           } 
         
           nextnode=temp->next;
           temp->next=nullptr;

           ListNode* nh=rev(prev->next);
           if(cnt==2){ head=nh;cnt=0;}
           temp1->next=nextnode;
           prev->next=nh;
           prev=temp1;

--r;
        }
return head;
    }
};