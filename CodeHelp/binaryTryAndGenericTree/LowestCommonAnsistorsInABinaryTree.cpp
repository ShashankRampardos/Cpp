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
        if(root==nullptr) return nullptr;//when root->left or right is null then return null
        if(root==p) return p;//when current root is at p return p
        if(root==q) return q;//when current root is at q return q

        TreeNode* leftAns=lowestCommonAncestor(root->left,p,q);// go to left subtree 
        TreeNode* rightAns=lowestCommonAncestor(root->right,p,q);//go to right subtree
        
        if(leftAns==nullptr&&rightAns==nullptr)
           return nullptr;
        else if(leftAns!=nullptr&&rightAns==nullptr) 
           return leftAns;
        else if(leftAns==nullptr&&rightAns!=nullptr)
           return rightAns;
        else// if both not equal to nullptr then root (current node in recursive call is the answer)
           return root;          
    }
};
