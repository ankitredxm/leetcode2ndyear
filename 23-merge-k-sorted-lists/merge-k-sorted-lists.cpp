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
    ListNode* merge(ListNode* a,ListNode* b){
        ListNode* temp1=a;
        ListNode* temp2=b;
        ListNode* h=new ListNode(0);
        ListNode* h1=h;
        while(temp1!=nullptr&&temp2!=nullptr){
            if(temp1->val>temp2->val){
                h->next=new ListNode(temp2->val);
                
                temp2=temp2->next;
            }
            else{
                h->next=new ListNode(temp1->val);
                temp1=temp1->next;
            }
            h=h->next;
        }

        while(temp1!=nullptr){
             h->next=new ListNode(temp1->val);
             h=h->next;
             temp1=temp1->next;
        }

        while(temp2!=nullptr){
              h->next=new ListNode(temp2->val);
              h=h->next;
              temp2=temp2->next;
        }

        return h1->next;
    }




    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
            ListNode* a=arr[0];
            arr.erase(arr.begin());
            ListNode* b=arr[0];
            arr.erase(arr.begin());
            ListNode* c=merge(a,b);
            arr.push_back(c);
        }

        return arr[0];
    }
};