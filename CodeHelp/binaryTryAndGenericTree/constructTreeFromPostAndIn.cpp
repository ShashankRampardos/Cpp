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
// mapping
    void mapping(vector<int>& inorder,map<int,int>& mp){
        for(int i=0;i<inorder.size();i++){
            int element=inorder[i];
            mp[element]=i;
        }
    }
    // every vector by reference to avoid TLE
    TreeNode* constructTreeFromPostorderAndInorder(vector<int> &in,vector<int>&post,int &postindex,int instart,int inend,map<int,int>& mp){
        if(postindex<0||instart>inend)//start and end index ka use keval base case may hay 
        return nullptr;

        int element=post[postindex];
        postindex--;// postindex ko by reference bana.
        TreeNode* root=new TreeNode(element);
         int position=mp[element];// index of element in inorder array.
         //right first in postorder 
        root->right=constructTreeFromPostorderAndInorder(in,post,postindex,position+1,inend,mp);
        // left may laga day ubh.
        root->left=constructTreeFromPostorderAndInorder(in,post,postindex,instart,position-1,mp);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> mp;
        int postindex=postorder.size()-1;//last index of preorder because we start from last of it then right then left.
        mapping(inorder,mp);//mapping of inorder element to its index.
        return constructTreeFromPostorderAndInorder(inorder,postorder,postindex,0,inorder.size()-1,mp);
    }
};
