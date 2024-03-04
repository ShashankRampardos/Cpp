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
     int getLength(ListNode* head){
         int count=0;
         ListNode* it=head;
         while(it){
             count++;
             it=it->next;
         }
         return count;
     }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=getLength(head);
        n=len-n+1;
        ListNode* it=head;
        ListNode* itPrev=head;
        if(n==1){
            head = head->next;
        }
        n--;
        while(it&&n){
            itPrev = it;
            it = it -> next;
            n--;
        }
        
       
        itPrev->next=((it)?it->next:nullptr);
        
        return head;
    }
};
