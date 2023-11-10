class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        Node* t=head;
        Node* tp=head;
        int m=M,n=N;
      //delete n nodes after skipping m nodes( repeat this process till link list ends)
        while(t!=nullptr){
        while(t!=nullptr&&m){
            
            tp=t;
            t=t->next;
            m--;
        }
        
        while(t!=nullptr&&n){

            Node* to_delete=t;
            tp->next=t->next;
            t=t->next;
            delete to_delete;
            n--;
        }
        m=M;n=N;
      }    
    }
};
