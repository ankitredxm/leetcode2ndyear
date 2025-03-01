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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* h=new ListNode();
        ListNode* head=h;
        while(a!=NULL&&b!=NULL){
           
            if(a->val>b->val){
                h->next=b;
                b=b->next;
            }
            else{
                h->next=a;
                a=a->next;
            }
            h=h->next;
          
           
        }
        if(a!=NULL){
            h->next=a;
        }
        else{
            h->next=b;
        }
        return head->next;
    }
};