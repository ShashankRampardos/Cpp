class Solution{
public:
    void getlastNode(Node* head,int &n,int &ans){
        if(head==nullptr)return;
        
        getlastNode(head->next,n,ans);
        //back tracking
        if(n==1){
            ans=head->data;
        }
        n--;
    }
    int getNthFromLast(Node *head, int n)
    {   //if(!head)return ;
         
        int ans=INT_MIN;
        getlastNode(head,n,ans);
        if(ans==INT_MIN)return -1;
        return ans;
        
        
    }
};
