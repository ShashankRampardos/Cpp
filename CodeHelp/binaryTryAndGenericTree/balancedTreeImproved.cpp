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
//____________
//O(n)
//-----------
class Solution {
public:
    int customHeight(TreeNode* root,bool& ans){
        if(root==nullptr)
          return 0;
        
        int leftHeight=customHeight(root->left,ans);
        int rightHeight=customHeight(root->right,ans);
         
        ans=ans&&(1>=abs(leftHeight-rightHeight));

        return 1+max(leftHeight,rightHeight);  
    }
    bool isBalanced(TreeNode* root) {
        bool ans=true;
        
        customHeight(root,ans);
        return ans;
    }
};
