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
        ListNode* ans=new ListNode();
        ListNode* ansIterator=ans;
        ListNode* ansIteratorPrev=ans;
        ListNode* t1=list1;
        ListNode* t2=list2;

if(t1==nullptr&&t2==nullptr){
    return nullptr;
}
        while(t1!=nullptr&&t2!=nullptr){
            if(t1->val<t2->val){
                ListNode* newn=new ListNode();
                ansIterator->val=t1->val;
                ansIterator->next=newn;
                t1=t1->next;
                ansIteratorPrev=ansIterator;
                ansIterator=ansIterator->next;
            }
            else{
                ListNode* newn=new ListNode();
                ansIterator->val=t2->val;
                ansIterator->next=newn;
                t2=t2->next;
                ansIteratorPrev=ansIterator;
                ansIterator=ansIterator->next;
            }
        }
    // either of the loop will work bot not both 
        while(t1!=nullptr){
                ListNode* newn=new ListNode();
                ansIterator->val=t1->val;
                ansIterator->next=newn;
                t1=t1->next;
                ansIteratorPrev=ansIterator;
                ansIterator=ansIterator->next;
        }
        while(t2!=nullptr){
                ListNode* newn=new ListNode();
                ansIterator->val=t2->val;
                ansIterator->next=newn;
                t2=t2->next;
                ansIteratorPrev=ansIterator;
                ansIterator=ansIterator->next;
        }
        
        delete ansIterator;
        ansIterator=nullptr;
        ansIteratorPrev->next=nullptr;
        return ans;


    }
};
