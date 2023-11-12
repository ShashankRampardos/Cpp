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
    ListNode* getLastNode(ListNode* head){
        ListNode* iterator=head;
        if(head==nullptr)return nullptr;
        while(iterator->next!=nullptr){
            iterator=iterator->next;
        }
        return iterator;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)return nullptr;

        ListNode* tail=getSecondLastNode(head);
        ListNode* front=head;
         k--;
        while(k){
            tail->next=front;
            ListNode* temp=front;
            front=front->next;
            temp->next=nullptr;
            tail=temp;
            k--;
        }
        return front;
    }
};
