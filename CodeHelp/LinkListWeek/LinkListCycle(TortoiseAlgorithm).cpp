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
    bool hasCycle(ListNode *head) {
        
        ListNode* fp=head;
        ListNode* sp=head;
      //ye sahi tarika hay tortoise algorithm ka
        while(fp!=nullptr){
            fp=fp->next;
            if(fp!=nullptr){
               fp=fp->next;
               //abh sp ki bari
               sp=sp->next;
            }
            if(sp==fp)
            return true;
        }
        return false;
    }
};
