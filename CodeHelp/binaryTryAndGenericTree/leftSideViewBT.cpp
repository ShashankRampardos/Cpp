void leftview(Bst* root,int level,vector<int>& leftviewstore){
  if(root==nullptr)
    return;
  if(level==leftviewstore.size())
    leftviewstore.push_back(root->data);

  leftview(root->left,level+1,leftviewstore);
  leftview(root->right,level+1,leftviewstore);
  
}
