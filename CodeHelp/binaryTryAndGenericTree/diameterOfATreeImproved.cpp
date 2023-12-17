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
//________________
//O(n)            |
//________________|
class Solution {
public:
    int maxDepth(TreeNode* root,int &D){
        if(root==nullptr)
        return 0;
        int leftDepth=maxDepth(root->left,D);
        int rightDepth=maxDepth(root->right,D);
        int count=1+ max(leftDepth,rightDepth);
        int currentDiameter=leftDepth+rightDepth;
        D=max(currentDiameter,D);
        return count;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int D=0;
         //f(root==nullptr)
         //return 0;

         //int option1=diameterOfBinaryTree(root->left);
         //int option2=diameterOfBinaryTree(root->right);
         //int option3=maxDepth(root->left)+maxDepth(root->right);

         //return max(option1,max(option2,option3));
          maxDepth(root,D);
          return D;

    }
};
