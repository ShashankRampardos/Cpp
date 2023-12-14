/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void createMap(vector<int> in,map<int,int>& mp){
    
  for(int i=0;i<in.size();i++){
    int element=in[i];
    mp[element]=i;
  }
}
    TreeNode*  constructBstFromPreorderAndInorder(vector<int> &pre,vector<int> &in,int &preindex,int instart,int inend,map<int,int> mp){

    if(preindex>=pre.size()||instart>inend)
      return nullptr;

    TreeNode* root=new TreeNode(pre[preindex]);
    
    int position=mp[pre[preindex]];
  preindex++;

  root->left=constructBstFromPreorderAndInorder(pre,in,preindex,instart,position-1,mp);
root->right=constructBstFromPreorderAndInorder(pre,in,preindex,position+1,inend,mp);
  return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        createMap(inorder,mp);
        int preindex=0;
        return constructBstFromPreorderAndInorder(preorder,inorder,preindex,0,inorder.size()-1,mp);

    }
};
