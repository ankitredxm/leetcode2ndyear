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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode(0);
        ListNode* ans=temp;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int carry=0;
int sum=0;
        while(temp1!=NULL&&temp2!=NULL){
            sum=temp1->val+temp2->val+carry;
            ListNode* h=new ListNode(sum%10);
              h->next=NULL;
            carry=sum/10;
            temp->next=h;
          
            temp=temp->next;
            temp1=temp1->next;
            temp2=temp2->next;

        }
        while(temp1!=NULL){
            sum=temp1->val+carry;
 ListNode* h=new ListNode(sum%10);
 h->next=nullptr;
temp->next=h;
carry=sum/10;
temp=temp->next;
 temp1=temp1->next;
 
        } 

        while(temp2!=NULL){
  sum=temp2->val+carry;
 ListNode* h=new ListNode(sum%10);
 h->next=nullptr;
temp->next=h;
carry=sum/10;
temp=temp->next;
 temp2=temp2->next;
        } 

        if(carry==1){
             ListNode* h=new ListNode(carry);
 h->next=nullptr;
temp->next=h;
        }
        
        return ans->next;
          }
};