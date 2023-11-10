class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        // a[0] is for 0 a[1] for 1 and a[2] is for 2 counting
        int array[3]={0,0,0};
        
        Node* iterator=head;
        
        while(iterator!=nullptr){
            if(iterator->data==0)
             array[0]++;
            else if(iterator->data==1)
             array[1]++;
            else //if(iterator->data==2)
             array[2]++;
             
             iterator=iterator->next;
        }
        iterator=head;
        while(array[0]!=0){
            iterator->data=0;
            iterator=iterator->next;
            array[0]--;
        }
        
        while(array[1]!=0){
            iterator->data=1;
            iterator=iterator->next;
            array[1]--;
        }
        while(array[2]!=0){
            iterator->data=2;
            iterator=iterator->next;
            array[2]--;
        }
        return head;
    }
};
