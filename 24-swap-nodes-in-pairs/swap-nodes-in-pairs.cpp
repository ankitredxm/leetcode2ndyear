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
    ListNode* swapPairs(ListNode* head) {
if(head==NULL||head->next==NULL) return head;
        ListNode* t=new ListNode(0);
        t->next=head;
        ListNode* temp=head;
        ListNode* n=head->next;
        cout<<n->val;
        ListNode* n1=head->next->next;
        ListNode* ans=head->next;

        while(n1!=NULL&&n1->next!=NULL){
            n->next=temp;
            temp->next=n1;
            t->next=n;

            t=t->next->next;
            n=n->next->next->next;
            
            n1=n1->next->next;
            temp=temp->next;


        }

         n->next=temp;
            temp->next=n1;
            t->next=n;

            cout<<n->val;

return ans;

    }
};