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
ListNode* reverse(ListNode* head)
{
    if(head==NULL||head->next==NULL) return head;
    ListNode* nhead=reverse(head->next);
    head->next->next=head;
    head=head->next;
    head->next->next=NULL;
    return nhead;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL||head->next==NULL) return head;
        if(left==right) return head;
        else {
            if(head->next->next==NULL) return reverse(head);
        }
        ListNode* ad=head;
        ListNode* ad1=head;
        ListNode* ad2=head;
        ListNode* temp1=head;
        for(int i=0;i<right;++i){
            temp1=temp1->next;  // address of 5 stored in temp1
        }
        ListNode* temp2=head;
        for(int i=0;i<right-1;++i){
            temp2=temp2->next;  // address of 4
        }
        temp2->next=NULL;
       
     for(int i=2;i<=left;++i)
     {
       ad1=ad1->next;
     }
     ListNode* rev=reverse(ad1);
     for(int i=2;i<left;++i)
     {
         ad=ad->next;
     }
     if(left==1) {head=rev;ad2=head;}
     else
     ad->next=rev;
     

     for(int i=2;i<=right;++i)
     ad2=ad2->next;
     
     ad2->next=temp1;
     
     return head;
   
    //     while(ad1->next!=NULL)
    //     ad1=ad1->next;
    //     ad1->next=temp1;
    //     return ad;


    }
};