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
        for(int i=1;i<left;++i) temp=temp->next;
        ListNode* prev=NULL;
        ListNode* curr=temp->next;
        if(head==NULL||head->next==NULL) return head;
        while(right-left+1){
            ListNode* n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
            --right;
            
                    }
                    temp->next->next=curr;
                    temp->next=prev;
                    return d->next;


    }
};