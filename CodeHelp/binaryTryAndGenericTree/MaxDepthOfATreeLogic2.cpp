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
    void logic(TreeNode* root,int &ans,int level=0){
        if(root==nullptr)
          return;
        if(ans==level)
         ans++; 
        logic(root->left,ans,level+1);
        logic(root->right,ans,level+1);
          
    }
    int maxDepth(TreeNode* root) {
        int ans=0;
        logic(root,ans);
        return ans;
    }
};
