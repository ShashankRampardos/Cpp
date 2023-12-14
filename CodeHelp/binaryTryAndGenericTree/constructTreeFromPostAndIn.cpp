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
    void mapping(vector<int>& inorder,map<int,int>& mp){
        for(int i=0;i<inorder.size();i++){
            int element=inorder[i];
            mp[element]=i;
        }
    }
    TreeNode* constructTreeFromPostorderAndInorder(vector<int> &in,vector<int>&post,int &postindex,int instart,int inend,map<int,int>& mp){
        if(postindex<0||instart>inend)
        return nullptr;

        int element=post[postindex];
        postindex--;
        TreeNode* root=new TreeNode(element);
         int position=mp[element];
      //node bana or left right ko recursion fill kardega.
        root->right=constructTreeFromPostorderAndInorder(in,post,postindex,position+1,inend,mp);
        root->left=constructTreeFromPostorderAndInorder(in,post,postindex,instart,position-1,mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> mp;
        int postindex=postorder.size()-1;
        mapping(inorder,mp);
        return constructTreeFromPostorderAndInorder(inorder,postorder,postindex,0,inorder.size()-1,mp);
    }
};
