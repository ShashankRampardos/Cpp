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
   void rightviewvector(TreeNode* root,vector<int>& ans,int level=0){
       if(root==nullptr)
       return;
       if(level==ans.size())
       ans.push_back(root->val);

       rightviewvector(root->right,ans,level+1);
       rightviewvector(root->left,ans,level+1);
   }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr)
        return ans;
        rightviewvector(root,ans);
        return ans;

    }
};
