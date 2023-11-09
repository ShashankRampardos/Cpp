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
    ListNode* midList(ListNode* head){//ye middle say sari list element wali linkList dege
        ListNode *fp=head;//fast ptr
        ListNode *sp=head;//slow ptr

        while(fp->next!=NULL){
            if((fp->next)->next!=NULL){
                fp=(fp->next)->next;
                sp=sp->next;
            }
            else{
                sp=sp->next;
                break;
            }
        }
        
        return sp;
    }
    ListNode* reverse(ListNode* tp,ListNode* t){
        if(t==NULL){
               return tp;
        }
        //t:temp, tp:temp previous, tn: tempNext
        ListNode *tn=t->next;
        t->next=tp;
        tp=t;
        t=tn;

       return reverse(tp,t);

    }
    bool compareList(ListNode* l1, ListNode* l2){
        //l1 may mid element say last elelment tak hay list, l2 may puri list hay
        while(l1!=NULL){//l1->next!=null karta if wo nichay wali if condition kko comment nahi karta tho
            if(l1->val!=l2->val){
               return false;
            }
            else{
                l1=l1->next;
                l2=l2->next;
            }
        }
        //if(l1->val!=l2->val)
         //  return false;
        return true;
    }
public:
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* list1=reverse(nullptr,midList(head));//l1 of compare()
        ListNode* list2=head;// l2 of compare() see meaning in compare() comments
        
        return compareList(list1,list2);

    }
};
