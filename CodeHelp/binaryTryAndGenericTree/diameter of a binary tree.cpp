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
public://skew tree not allowed in this queston
     int height(TreeNode* root){
         if(root==nullptr){
             return 0;
         }
         int count=max(height(root->left),height(root->right))+1;
         return count;
     }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==nullptr)
          return 0;

          int option1=diameterOfBinaryTree(root->left);
          int option2=diameterOfBinaryTree(root->right);
          int option3=height(root->left)+height(root->right);
          return max(option1,max(option2,option3));
    }
};
