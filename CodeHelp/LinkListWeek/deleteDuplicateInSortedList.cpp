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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp=head;

        while(temp!=nullptr){
            if(temp->next!=NULL&&temp->val==(temp->next)->val){
              //delete karo duplicate node ko  
              ListNode* to_delete=temp->next;
                temp->next=(temp->next)->next;
                delete to_delete;
            }//duplicate nahi hay tho agay badho tum
            else{
                temp=temp->next;
            }
        }
      //return karday abh final list.
        return head;
    }
};
