/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {// detect cycle (and delete also( bonus by me))
        ListNode* fp=head;
        ListNode* sp=head;
         // tortoise alogo part.
        while(fp!=NULL){
            fp=fp->next;
            if(fp!=nullptr){
                fp=fp->next;

                sp=sp->next;
                if(fp==sp)
                  break;
            }
        }
        //if no loop exist.
        if(fp==NULL)
        return nullptr;
        //this is for breaking the loop of link list
        ListNode* prev_of_fp=sp;
        //start sp from head again( part of algorithm)
        sp=head;
        //this will give the node from where loop starts
        while(fp!=sp){
            prev_of_fp=fp;
            fp=fp->next;
            sp=sp->next;
        }
       // below line will break the loop of the linklist and make it a normal link list.
        prev_of_fp->next=NULL;
        return fp;
    }
};
