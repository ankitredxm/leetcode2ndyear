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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* d=new ListNode(0);
        d->next=head;
        ListNode* prev=d;
        ListNode* temp=head;
        ListNode* ch;
        if(head==nullptr) return nullptr;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->val==temp->next->val){ 
// see from which end temp is equal
ch=temp;
while(ch!=NULL&&temp->val==ch->val){
    ch=ch->next;
}
prev->next=ch;
temp=ch;

            }
            else{ temp=temp->next;
            prev=prev->next;}
        }
        return d->next;
    }
};