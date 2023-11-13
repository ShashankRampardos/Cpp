class Solution
{// skip m elements save the mth node, delete the n nodes link nth node to mth node, then do recursive call
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
       if(!head) return; 
        
        struct Node* it=head;
        
        for(int i=0;i<M-1;i++){
            if(!it)return;
            it=it->next;
            
        }
        if(!it)return;
        
        struct Node* checkPoint=it;
        it=it->next;
        for(int i=0;i<N;i++){
            if(!it) break;// return mat kar kyuki loop kay bahar checkpoint may null dal na ha, return kia tho checkpoint dangling dointer ban jayega
            struct Node* todel=it;
            it=it->next;
            delete todel;
        }
        checkPoint->next=it;
        
        linkdelete(it,M,N);
        
    }
};
