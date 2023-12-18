vector<int> diagonal(Node *root)
{ vector<int> ans;
  queue<Node*> q;
  q.push(root);
  
  while(!q.empty()){
      
      Node* element=q.front();
      q.pop();
      
      
      while(element){//element!=nullptr
      if(element->left)
        q.push(element->left);
        
          ans.push_back(element->data);
          element=element->right;
      }    
  }
  
  return ans;

}
