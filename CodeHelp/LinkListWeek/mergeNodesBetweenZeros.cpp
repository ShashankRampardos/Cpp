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
    ListNode* mergeNodes(ListNode* head) {
      
     ListNode* iterator=head;
     ListNode* ansHead=nullptr;
     ListNode* ansIterator=nullptr;
     int sum=0;
     // for first node
     ansHead=new ListNode(sum);
     ansIterator=ansHead;
     iterator=iterator->next;
     //for rest of the node
     while(iterator!=nullptr){
        //while value of node is not 0
         if(iterator->val!=0){
             sum+=iterator->val;
             iterator=iterator->next;
         }
         else{// when 0
             ansIterator->val=sum;
             //if iterator contains the last node then do note execute below two lines
             if(iterator->next!=nullptr){
             ansIterator->next=new ListNode();
             ansIterator=ansIterator->next;
             }
             iterator=iterator->next;
             sum=0;
         }
     }

       return ansHead;

    }
};
