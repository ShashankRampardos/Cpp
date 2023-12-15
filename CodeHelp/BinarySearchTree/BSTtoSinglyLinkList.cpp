void logic(TreeNode<int>* root,TreeNode<int>* &head){
    if(root==nullptr)
     return;

     logic(root->right,head);

     root->right=head;
    if(head!=nullptr)
     head->left=nullptr;
     head=root;

     logic(root->left,head);
}
