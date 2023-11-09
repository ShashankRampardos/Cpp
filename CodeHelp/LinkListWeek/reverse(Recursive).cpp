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
    ListNode* recursive(ListNode* tp,ListNode* t){
        if(t==NULL){
            return tp;//tq may new head hay abh
        }
        ListNode *tn=t->next;
        t->next=tp;
        tp=t;
        t=tn;
        return recursive(tp,t);
    }
public:
    ListNode* reverseList(ListNode* head) {
        //temp prevous: tp
        //temp temp current: t
        ListNode *tp=NULL;
        ListNode *t=head;

       
    head=recursive(tp,t);
    return head;
    }
};
