/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)//base case
         return nullptr;
         
          //when both p and q are at left subtree
         if(p->val<root->val&&q->val<root->val)
            return lowestCommonAncestor(root->left,p,q);
        
        //when both p and q are at right subtree
        else if(p->val>root->val&&q->val>root->val)
            return lowestCommonAncestor(root->right,p,q);//agay pass kartay jao bas last may main() kay pas he jayega result. 

        return root;    
    }  
};
