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
//find length
     int length(ListNode* head){
         if(head==NULL)return -1;
         ListNode* iterator=head;
         int length=0;
         while(iterator!=nullptr){
              length++;
              iterator=iterator->next;
         }
         return length;
     }
     //store address of each node of the link list in an array of pointers to ListNode
     ListNode** takeAddresses(ListNode* head,int len){
         ListNode* iterator=head;
          
         if(len==-1)return nullptr;
        ListNode** arr = new ListNode*[len];

         for(int i=0;i<len;i++){
             arr[i]=iterator;
             iterator=iterator->next;
         }
         return arr;
     }
    
    ListNode* rotateRight(ListNode* head, int k) {
              
              int len=length(head);
              
              ListNode** arr=takeAddresses(head,len);
              //edge cases handling
              if(arr==nullptr)return nullptr;
              if(len==1)return head;

              ListNode* iterator=head;  
          
              k=k%len;//minimize the value of k (less than or equal to length of link list)
              int front=0;//arr[front] is the address of front of ll 
              int last=len-1;//'''
              int secondLast=len-2;//'''

             
              while(k){
                
                  arr[last]->next=arr[front];
                  arr[secondLast]->next=nullptr;
                 
                  front=last;
                  last=secondLast;
                  secondLast--;
                 
                  if(secondLast<0){
                      secondLast=len-1;
                  }
                  k--;
                                 
              }
              return arr[front];
    }
};
