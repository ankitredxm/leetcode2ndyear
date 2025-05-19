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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* d=new ListNode(0);
        d->next=head;
ListNode* temp=d;
        ListNode* temp2=d;
        int l=left;
        int r=right;
        while(right>0){
            temp2=temp2->next;
            --right;
        }
      
        
        while(--left){
            temp=temp->next;
            

        }
        if(temp->next!=nullptr&&temp->next->next!=nullptr&&l!=r){
        ListNode* prev=temp->next;
        
       
        ListNode* curr=temp->next->next;
        ListNode* h=temp->next->next->next;
        
       
        while(curr!=temp2&&h!=nullptr&&(r-l)>0){
            curr->next=prev;
            --l;--r;
prev=curr;
curr=h;
h=h->next;
        }
        curr->next=prev;
        temp->next->next=h;

        temp->next=curr;}
        return d->next;

        
    }
};