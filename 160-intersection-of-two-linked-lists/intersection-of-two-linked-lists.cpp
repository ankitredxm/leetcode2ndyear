/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
int len(ListNode* h){
    int cnt=0;
    while(h!=NULL){
        ++cnt;
        h=h->next;
    }
    return cnt;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        if(len(headA)>len(headB)){
            int l=len(headA)-len(headB);
        
            while(l>0){
temp1=temp1->next;
--l;
            }
        }
        else{
            int l=len(headB)-len(headA);
        
            while(l>0){
temp2=temp2->next;
--l;
            }  
        }




        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
};