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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        int carry=0;
        int total=0;
        //for first digits
        ans=new ListNode();
        temp=ans;
        total=l1->val+l2->val;
        carry=total/10;
        temp->val=total%10;

        l1=l1->next;
        l2=l2->next;

//add rest of them till one of the list ends
        while(l1!=nullptr&&l2!=nullptr){
            total=l1->val+l2->val+carry;
            ListNode* newN=new ListNode(total%10);
            temp->next=newN;
            temp=temp->next;
            carry=total/10;             
             l1=l1->next;
             l2=l2->next;
        }
       
        
        //handle case when one list ends and one is still left.
        while(l1!=NULL){
           total=l1->val+carry;
            ListNode* newN=new ListNode(total%10);
            temp->next=newN;
            temp=temp->next;
            carry=total/10;             
             l1=l1->next;
 
        }
        while(l2!=NULL){
            total=l2->val+carry;
            ListNode* newN=new ListNode(total%10);
            temp->next=newN;
            temp=temp->next;
            carry=total/10;             
             l2=l2->next;

           
        }
        if(carry>0){
            total=carry;
            ListNode* newN=new ListNode(total%10);
            temp->next=newN;
            temp=temp->next;                    
        }
        
        return ans;
    }
};
