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
ListNode* rev(ListNode* h){
    if(h==NULL||h->next==NULL) return h;
    ListNode* nh=rev(h->next);
    ListNode* f=h->next;
    f->next=h;
    h->next=NULL;
    return nh;
}
    bool isPalindrome(ListNode* head) {
        //middle
        ListNode* slo=head;
        ListNode* f=head;
        ListNode* f1=head;
        ListNode* f2;

        while(f->next!=NULL&&f->next->next!=NULL){
            slo=slo->next;
            f=f->next->next;
        }
        ListNode* nh=rev(slo->next);
        // compare
        
        f2=nh;
        while(f1!=slo->next&&f2!=NULL){
if(f1->val!=f2->val) return false;
f1=f1->next;
f2=f2->next;
        }
        return true;
    }
};