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
    ListNode* rotateRight(ListNode* head, int k) {
        //length
        if(head==NULL) return NULL;
        ListNode* tail=head;
        int len=1;
        while(tail->next!=NULL){
            tail=tail->next;
            ++len;
        }
        // here we will find remainder
         ListNode* temp=head;
        int r=k%len;
        int traverse=len-r;
        while(traverse-1>0){
            temp=temp->next;
            --traverse;
        }
        // shifting
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};