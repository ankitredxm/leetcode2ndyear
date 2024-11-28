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
        if(head==NULL) return NULL;
        ListNode* a=head->next;
        ListNode* b=head;
        while(a!=NULL)
        {
            while(a!=NULL&&a->val==b->val)
            a=a->next;

            b->next=a;
            b=b->next;
            if(a!=NULL)
            a=a->next;


        }
        return head;
    }
};