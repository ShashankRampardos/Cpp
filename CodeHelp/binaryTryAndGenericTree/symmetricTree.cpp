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
    bool recursively(TreeNode* tree1,TreeNode* tree2){
           if(!tree1&&!tree2)
            return true;
          if(tree1&&tree2){
              return (tree1->val==tree2->val)&&recursively(tree1->left,tree2->right)&&recursively(tree1->right,tree2->left);
          }  
          else 
           return false;
    }
    bool isSymmetric(TreeNode* root) {
        return recursively(root,root);
    }
};
