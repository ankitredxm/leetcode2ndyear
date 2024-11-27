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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        /// here we will calculate diff 
        int asize=1;
        int bsize=1;
        ListNode* tempa=headA;
        ListNode* tempb=headB;
        while(tempa!=NULL)
        {
            tempa=tempa->next;
            ++asize;

        }

        while(tempb!=NULL)
        {
            tempb=tempb->next;
            bsize++;
        }

        if(asize>bsize)
        {
            for(int i=0;i<(asize-bsize);++i)
            headA=headA->next;

            while(headA!=NULL||headB!=NULL)
            {
                if(headA==headB) return headA;
                headA=headA->next;
                headB=headB->next;
            }
        }else{
            for(int i=0;i<(bsize-asize);++i)
            headB=headB->next;

            while(headA!=NULL||headB!=NULL)
            {
                if(headA==headB) return headA;
                headA=headA->next;
                headB=headB->next;
            }
        }

return NULL;
    }
};