class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
   int logic(Node* &root){
        
        if(!root)//base case for null node
           return 0;
        if(!root->left&&!root->right){// base case for leaf node
            int leafData=root->data;
            root->data=0;
            return leafData;
        } 
        
        int leftSum=logic(root->left);//get left sub tree sum
        
        int rightSum=logic(root->right);//get right sub tree sum
        
        int nodeData=root->data;//store current node data before updating it
        root->data=leftSum+rightSum;//add left and right sum
        return root->data+nodeData;//return sum of left and right and previous data of node which is sum of this sub tree
        
   }
    void toSumTree(Node *root)
    {
        logic(root);//void ke jaga int chaiya tha return type thats why created new function.
    }
};
