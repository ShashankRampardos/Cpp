 Node* mergeTwoSortedListVertically(Node* left,Node* right){
      Node* mptr=new Node(-1);
      Node* mptrHead=mptr;
      
      while(left!=nullptr&&right!=nullptr){
          if(left->data<right->data){
              mptr->bottom=left;
              mptr=left;
              left=left->bottom;
          }
          else{
              mptr->bottom=right;
              mptr=right;
              right=right->bottom;
          }
          
      }
      Node* linker=left!=nullptr?left:right;
      mptr->bottom=linker;
      
      Node* to_delete=mptrHead;
      mptrHead=mptrHead->bottom;
      
      delete to_delete;
      mptr=mptrHead;
    
     return mptrHead;
  }  
Node *mergeAllVertically(Node *root)
{
     if(root==nullptr){
         
         return root;
     }
    while(root->next!=nullptr){     
     Node* rootNext=root->next;
     root=mergeTwoSortedListVertically(root,root->next);
     Node* it=root;
     /*while(it!=nullptr){
          cout<<it->data<<" ";
          it=it->bottom;
      }
      cout<<endl;
     */root->next=rootNext->next;
    //rootNext->next=nullptr;
    }
    
    return root;
}

Node* flatten(Node* root){
     if(root==nullptr)
      return nullptr;
      root=mergeAllVertically(root);
      
     // vo ye function ko vertically list to horizantal list may banana kay lia seperate rakha tha without recursion par bad may pata chala ki vertically list he return karni hay, tho is function may say horozantal converson ka logic hataya tha and or kuch modify nahi kia
      return root;
      
}
