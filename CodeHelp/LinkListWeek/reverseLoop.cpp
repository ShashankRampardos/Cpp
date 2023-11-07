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
        
        ListNode *tp=NULL;
        ListNode *t=head;
        ListNode *tn=nullptr;
        while(t!=nullptr){
            tn=t->next;
            t->next=tp;
            tp=t;
            t=tn;
        }
    head=tp;
    return head;
    }
};
