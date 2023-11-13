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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
         
         vector<int> ans(2,-1);

         int min=INT_MAX;
         int max=INT_MIN;
         int maxhigh=INT_MIN;
         int maxlow=INT_MIN;
         int minhigh=INT_MAX;
         int minlow=INT_MAX;

         int index=1;
         bool isItFirstTimeCritical=true;
         ListNode* tp=head;
         ListNode* t=tp->next;
         ListNode* tn=t->next;
         //edge case
         if(tn==nullptr)//if there is only 2 nodes in the list then return [-1,-1]
          return ans;

         while(tn!=nullptr){
              if(tp->val>t->val&&tn->val>t->val||tp->val<t->val&&tn->val<t->val)
               {   //first critical point store in maxlow
                     if(isItFirstTimeCritical){
                     maxlow=index;
                     isItFirstTimeCritical=false;
                     }

                   minlow=minhigh;
                   minhigh=index;
                   if(abs(minhigh-minlow)<min){//abs is necessary
                       min=abs(minhigh-minlow);
                   }         
                  
               }
               //updating the iterators
               tp=t;
               t=tp->next;
               tn=t->next;
               index++;
         }

        //edge case
        if(minlow==INT_MAX)// if critical points less than 2;
          return ans;

        //for max
        maxhigh=minhigh;
        max=maxhigh-maxlow;//yahe pay int overflow error ho salta tha if there are cretical points less than2, but upar wala if nay bacha lia.
         
         //put max and min in vector
         ans[0]=min;
         ans[1]=max;

         return ans;
         
    }
};
