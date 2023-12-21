
class Solution {
public:
TreeNode* createBst(vector<int>& preorder,pair<int,int> p,int& i){
     //check if index of vector is out of bound or current element of vector is out of range which is specified by pair {lower range,upper range}
        if(i>=preorder.size()||preorder[i]<p.first||preorder[i]>p.second)
          return nullptr;//throw null to which will be catched by the root on the other side of the functon call

         //if all condition satisfied of above then create node and fill its left right
          
         //create root with vector current data
          TreeNode* root=new TreeNode(preorder[i]);
          i++;//increment vector iterator which is sent by reference.
          root->left=createBst(preorder,make_pair(p.first,root->val),i);//get left sub tree
          root->right=createBst(preorder,make_pair(root->val,p.second),i);//get right sub tree
  
          //now return root tree is ready in current call of createBst.
           return root;//this will be catched by either left caller or right caller or our BstFromPreorder function will send it to leetcode
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
          pair<int,int> p=make_pair(INT_MIN,INT_MAX);//initially pair value is {-infinity,infinity}
          int i=0;//vector iterator
          return createBst(preorder,p,i);//get the tree and throw on leet code face, all done :)
    }
};
