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
 //reverse then delete from fron then again reverse
class Solution {
ListNode* reverse(ListNode* tp,ListNode* t){
      if(t==NULL)
       return tp;
       ListNode* tn=t->next;
       t->next=tp;
       tp=t;
       t=tn;
       return reverse(tp,t);
       
 }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
           head=reverse(nullptr,head);
           ListNode* temp=head;
           ListNode* prevTemp=temp;
       int N=n;
       if(N==1){//corner case when n=1
            ListNode* t=head;
            head=head->next;
            delete t;
            return reverse(nullptr,head);
        }
       --n;
        while(temp!=nullptr&&n){
            prevTemp=temp;
            temp=temp->next;
            n--;
        }
        if(N==1){
            ListNode* t=head;
            head=head->next;
            delete t;
            return reverse(nullptr,head);
        }
        prevTemp->next=temp->next;
       delete temp;
        head=reverse(nullptr,head);
        return head;
    }
};
