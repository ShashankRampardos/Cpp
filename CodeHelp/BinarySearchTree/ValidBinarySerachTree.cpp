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
    bool isit(TreeNode* root,long long int lowerBound,long long int upperBound){
        if(root==nullptr)
          return true;
         
        
         bool leftAns=isit(root->left,lowerBound,root->val);
         bool rightAns=isit(root->right,root->val,upperBound);

          //if(leftAns&&rightAns&&root->val>=lowerBound&&root->val<=upperBound) property BST ki vilate ho jayegi less than ke jage less than equal kardia tho, bas is lia equal ka sign nahi use kia, equal ka sign say  [2147483647] wala test case solve ho jata.
          // equal lagaya tho [2,2,2] wala case bhi true ho jayega which is false.
          if(leftAns&&rightAns&&root->val>lowerBound&&root->val<upperBound)
           return true;
    return false;

    }
    bool isValidBST(TreeNode* root) {
      //long long used to handle case like[2147483647]
         long long int upperBound=2147483657;
         long long int lowerBound=-2147483658;
      return   isit(root,lowerBound,upperBound);

    }
};
