class Solution {
public:
//push data then go to left if possible other wise go to right
    void treeLeftBoundary(Node* root,vector<int>& left){
        if(root==nullptr)
        return;
        if(root->left==nullptr&&root->right==nullptr)
        return;
        
        left.push_back(root->data);
        
        if(root->left!=nullptr)
        treeLeftBoundary(root->left,left);
        else
        treeLeftBoundary(root->right,left);
        
    }
//go to right if possible otherwise go to left, and push data in backtracking (need is to take data from bottom to top)
    void treeRightBoundary(Node* root,vector<int>& right){
      if(root==nullptr)
        return;
        if(root->left==nullptr&&root->right==nullptr)
        return;
        
        if(root->right!=nullptr)
         treeRightBoundary(root->right,right);
        else
         treeRightBoundary(root->left,right);
         
         right.push_back(root->data);
    }
    // simple preorder tarversal, slightly modified
    void treeLeaf(Node* root,vector<int>& leaf){
        if(root==nullptr)
        return;
         
         if(root->left==nullptr&&root->right==nullptr){
          leaf.push_back(root->data);
          return;
         }
          
          treeLeaf(root->left,leaf);
          treeLeaf(root->right,leaf);
          
    }
    vector <int> boundary(Node *root)
    {
        vector<int> leftBoundary;
        vector<int> rightBoundary;
        vector<int> leafNodes;
        
        vector<int>ans;
        
        if(root==nullptr)//null tree case
         ans;
        
        treeLeftBoundary(root->left,leftBoundary);//root node ke chinta muj pay chod day, tu left subtree dekh
        treeLeaf(root->left,leafNodes);//single node wala case may root node data hota vector may tho 2 times ajata root data,
        treeLeaf(root->right,leafNodes);//thats why treeLeaf two times call kia to avoid single node case
        treeRightBoundary(root->right,rightBoundary);//root node ke chinta muj pay chod day, root data alag say push hoga
        
        
        // push all vectors in one ans vector.
        ans.push_back(root->data);
        ans.insert(ans.end(),leftBoundary.begin(),leftBoundary.end());
        ans.insert(ans.end(),leafNodes.begin(),leafNodes.end());
        ans.insert(ans.end(),rightBoundary.begin(),rightBoundary.end());
        
        return ans;
    }
};
