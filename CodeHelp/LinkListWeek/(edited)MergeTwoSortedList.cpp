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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* left=list1;
        ListNode* right=list2;

if(!left) return right;
if(!right) return left;

// idhar ah gaya matlabh both list are non empty 
        ListNode* mptr=new ListNode(-1);//temp head
        ListNode* ansListHead=mptr;
          //ek dummy head hay baki elements left right list kay hay, dummy head later will be deleted
        
        while(left!=nullptr&&right!=nullptr){
            
            //jho chota hay usko mptr kay next may dalo or mptr ko uspar lao or move the left or right iterator.
            if(left->val<right->val){
                mptr->next=left;
                mptr=left;
                left=left->next;
            }
            else{
                mptr->next=right;
                mptr=right;
                right=right->next;
            }
        }//jho bach gaya usko bhi link karo.

        ListNode *linker=left!=NULL?left:right;
        mptr->next=linker;

        // dummy head ko remove karo
        ListNode *toDel=ansListHead;
        ansListHead=ansListHead->next;
        delete toDel;

        
       return ansListHead;
    }
};
