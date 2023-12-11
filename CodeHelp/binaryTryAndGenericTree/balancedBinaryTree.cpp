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
    int height(TreeNode* root){
        if(root==nullptr)
          return 0;
        int count=max(height(root->left),height(root->right))+1; 
        return count;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
          return true;

        bool currentNodeAns=1>=abs(height(root->left)-height(root->right));  
        bool leftAns=isBalanced(root->left);
        bool rightAns=isBalanced(root->right);

        return currentNodeAns&&leftAns&&rightAns;
    }
};
