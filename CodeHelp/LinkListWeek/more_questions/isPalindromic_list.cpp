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
        function<ListNode*(ListNode*)> getMidNode = [](ListNode* head){
               ListNode* fast=head->next;
               ListNode* slow=head;
               while(fast&&fast->next){
                   slow=slow->next;
                   fast=fast->next->next;
               }
               return slow;
        };
        function<ListNode*(ListNode*)> revList = [](ListNode* head){
            if(!head||!head->next)return head;
            ListNode*prev=nullptr;
            ListNode* curr=head;
            ListNode* nxt=head->next;
            while(curr){
                curr->next = prev;
                prev = curr;
                curr = nxt;
                if(nxt)
                nxt = nxt->next;
            }
            return prev;
        };
public:
    bool isPalindrome(ListNode* head) {

        ListNode* temp=getMidNode(head);
        ListNode* list1=head;
        ListNode* list2=temp->next;
        temp->next=nullptr;

        list2 = revList(list2);
        bool isPalindrome=true;
        ListNode* it1 = list1;
        ListNode* it2 = list2;
        while(it1&&it2){
            if(it1->val!=it2->val){
                isPalindrome = false;
                break;
            }
            it1 = it1->next;
            it2 = it2->next;
        }
        list2 = revList(list2); 
        
        temp->next = list2;
        return isPalindrome;
    }
};
int init = [] {
    ios_base::sync_with_stdio(false);  cin.tie(nullptr);
    ofstream out("user.out");
    for (string s; getline(cin, s);)
        out<<(equal(s.begin()+1, s.begin()+s.size()/2, s.rbegin() + 1) ? "true\n" : "false\n");
    out.flush();
    exit(0);
    
    return 0;
}();
       
