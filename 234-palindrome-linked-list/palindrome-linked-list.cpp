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
    if(head->next==NULL) return head;
    ListNode* nhead=reverse(head->next);
    head->next->next=head;
    head=head->next;
    head->next->next=NULL;
    return nhead;
}
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
        {
            return true;
        }
        ListNode* slow=head;
        ListNode* f=head;
        while(f->next!=NULL&&f->next->next!=NULL){
            slow=slow->next;
            f=f->next->next;
        }
        ListNode* temp=reverse(slow->next);
        while(temp!=NULL)
        {
if(head->val!=temp->val) return false;
head=head->next;
temp=temp->next;
        }
        return true;

    }
};