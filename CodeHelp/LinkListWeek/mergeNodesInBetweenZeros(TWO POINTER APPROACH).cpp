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
// TWO POINTER APPROACH self explainatery
    ListNode* mergeNodes(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* last=nullptr;
        int sum=0;
        fast=fast->next;
        while(fast){
        
            if(fast->val!=0){
                sum=sum+fast->val;
             }else{
                slow->val=sum;
                sum=0;
                last=slow;
                slow=slow->next;
             }
             fast=fast->next;
        }
        last->next=nullptr;
        return head;

        while(slow){
            ListNode* to_del=slow;
            slow=slow->next;
            delete to_del;
        }
    }
};
