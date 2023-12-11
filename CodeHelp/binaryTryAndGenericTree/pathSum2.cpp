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
    void generate(TreeNode* root, int targetSum,vector<vector<int>>& ans,vector<int> temp,int sum=0){
        if(root==nullptr)
         return;  //base case
       //ek case solve
       sum=sum+root->val;
       temp.push_back(root->val);
  //extra case
       if(root->left==nullptr&&root->right==nullptr){
           if(sum==targetSum){
               ans.push_back(temp);
               return;
           }
           else
             return;
           
       }
// baki recursion dekhlega
       generate(root->left,targetSum,ans,temp,sum);
       generate(root->right,targetSum,ans,temp,sum);
    
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
          vector<vector<int>> ans;
          vector<int> temp;
          generate(root,targetSum,ans,temp);
          return ans;
    }
};
