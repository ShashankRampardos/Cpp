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
// INMAY SAHI TARIKA SAY CODE NAHI KIA TORTOISE ALGORITHM, IDHAR CHAL JAYEGI MAGAR HAR JAGA NAHI
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
            else {//handle even length linkList to get second middle node.//else part nahi hota tho even case may first midde element select ho jata
              sp=sp->next;
              break;
            }

        }
        return sp;
    }
};
