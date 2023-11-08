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
        int n=lenOfList(head);
        int mid=n/2+1;

        ListNode* temp=head;
         mid--;
        while(temp->next!=NULL&&mid){
            temp=temp->next;
            mid--;
        }   
        return temp;
    }
};
