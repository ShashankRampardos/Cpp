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
    bool isIt(TreeNode* root, int targetSum, int sum){
        if(root==nullptr)//basecase
        return false;
        
        sum=sum+root->val;//ek case solve
        if(root->left==nullptr&&root->right==nullptr){
            
            if(sum==targetSum)
            return true;
            else
            return false;
        }// baki recursion samal lega
        bool leftAns=isIt(root->left,targetSum,sum);
        bool rightAns=isIt(root->right,targetSum,sum);
        return leftAns||rightAns;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       return isIt(root,targetSum,0);
    }
};
