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
    void getvector(TreeNode* root,int k,vector<int>& v){
        if(root==nullptr)
        return;

        //L
        getvector(root->left,k,v);
        //N
        v.push_back(root->val);
        //R
        getvector(root->right,k,v);

    }
    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr)
         return false;
        vector<int> v;
       getvector(root,k,v);

        for(int i=0,j=v.size()-1;i<j;){
             int sum=v[i]+v[j];
            if(sum>k)
             j--;
            else if(sum<k)
             i++; 
            else
             return true; 

        }
        return false;
    }
};
