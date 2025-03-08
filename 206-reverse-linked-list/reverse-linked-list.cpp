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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
return head;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* front=head->next;
        while(1){
            curr->next=prev;
            
            prev=curr;
            if(front==NULL){
                break;
            }
            curr=front;
            
            front=front->next;
        }
        return curr;


    }
};