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
        if(!list1)return list2;
        if(!list2)return list1;
         ListNode* ans=0;
        if(list1->val<list2->val){
             ans=list1;// ans may head hay baki head may kya dalna hay vo recursion samal lega
             list1->next=mergeTwoLists(list1->next,list2);
        }
        else{
            ans=list2;//head hay ans may baki head kay next may kya dalna hay vo recursion samal lega
            list2->next=mergeTwoLists(list1,list2->next);
        }
        return ans;
    }
};
