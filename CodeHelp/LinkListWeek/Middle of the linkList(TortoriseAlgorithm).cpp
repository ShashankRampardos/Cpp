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
    int lenOfList(ListNode* head){
        int count=1;
        ListNode* temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        //fastPointer:fp
        //slowPointer:sp
        ListNode* sp=head;
        ListNode* fp=head;
        //fp jump by 2
      //sp jump by one if and only if fp is able to jump 
        while(fp->next!=nullptr){

            if((fp->next)->next!=nullptr){//if fp is able to jump
                fp=(fp->next)->next;
                sp=sp->next;/// then sp jump
            }
            else {//handle even length linkList to get second middle node.
              sp=sp->next;
              break;
            }

        }
        return sp;
    }
};
