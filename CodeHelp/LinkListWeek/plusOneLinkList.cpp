class Solution
{   Node* reverse(Node* tp,Node* t){
      if(t==NULL){
          return tp;
      }
      
      Node* tn=t->next;
      t->next=tp;
      tp=t;
      t=tn;
     return reverse(tp,t);
    }
    public:
    Node* addOne(Node *head) 
    {
        head=reverse(nullptr,head);//number ulta kar
        Node* temp=head;//link list iterator
        int carry=1;//store carry
        while(temp->next!=NULL){
          int total=temp->data+carry;
          carry=total/10;
          temp->data=total%10;
          temp=temp->next;
        }
        //for last node
        int total=temp->data+carry;
          carry=total/10;
          temp->data=total%10;
          
          if(carry==1){
              temp->next=new Node(carry);//add new node if carry forward even after addition complete
             // temp=temp->next;
          }
         head=reverse(nullptr,head);// ultay number ko phir say sedha kar
        return head;
    }
};
