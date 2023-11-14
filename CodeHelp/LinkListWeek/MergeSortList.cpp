//O(nlog(n))
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

 //TC: O(nlog(n))
class Solution {
public:
// merge two sorted list wala function.
    ListNode* mergeList(ListNode* left,ListNode*right){
          ListNode*  mptr=new ListNode();
          ListNode* mptrHead=mptr;
          while(left!=nullptr&&right!=nullptr){

              if(left->val<right->val){
                  mptr->next=left;
                  mptr=left;
                  left=left->next;
              }else{
                  mptr->next=right;
                  mptr=right;
                  right=right->next;
              }
          }
          ListNode* linker=left!=nullptr?left:right;
          mptr->next=linker;

          ListNode* to_del=mptrHead;
          mptrHead=mptrHead->next;
          delete to_del;
          
          return mptrHead;
    }
// get first middle node in case of even length list
    ListNode* getMidNode(ListNode* head){
          ListNode* slow=head;
          ListNode* fast=head->next;//=head to get second middle element

          while(fast!=nullptr&&fast->next!=nullptr){
              slow=slow->next;
              fast=fast->next->next;
          }
          return slow;
    }
// merge sort
    ListNode* sortList(ListNode* head) {
        if(head==0||head->next==0){
            return head;
        }
        //ek case solve ( dividing into two list)
        ListNode* mid=getMidNode(head);
       // cout<<getMidNode(head)->val;
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=0;
       //recursion
        left=sortList(left);
        right=sortList(right);
        //back track==> toti list ko phir say jhoda, jho raita phalaya usko modified way may samat do
        ListNode* merge=mergeList(left,right);

        return merge;
    }
};
