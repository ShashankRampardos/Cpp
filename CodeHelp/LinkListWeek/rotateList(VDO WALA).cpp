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
    int length(ListNode* head){
        ListNode* it=head;
        int count=0;
        while(it){
            it=it->next;
            count++;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        //edge case
        if(!head)return 0;
        ListNode* it=head;
        
        int len=length(head);
        
        int modK=k%len;    
        //positon from front just before the target position
        int pos=len-modK;
        
        //edge case when no rotation needed
        if(modK==0)return head;
        // take it to target position just before
        while(--pos){
            it=it->next;
        }
        ListNode* tempHead=head;
        head=it->next;
        it->next=NULL;
        
        it=head;
        
        while(--modK){
            it=it->next;
        }
        it->next=tempHead;

        return head;
    }
};
