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
long long ans=0;
    void pathSumI(TreeNode* root,long long targetSum){
        if(root==nullptr)
          return;

        pathSumI(root->left,targetSum-root->val);
        pathSumI(root->right,targetSum-root->val);
a
         if(root->val==targetSum)
           ans++;
          

    }
    int pathSum(TreeNode* root, int targetSum) {
          if(root==nullptr)
            return 0;
          pathSum(root->left,targetSum);
          pathSum(root->right,targetSum);  
          pathSumI(root,targetSum);
          return ans;
    } 
};
